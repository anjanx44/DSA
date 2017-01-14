#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<cstring>
#include<queue>

using namespace std;

#define debug(x) cout<<#x<<'='<<x<<endl;
#define MAXLL 9223372036854775807
#define MINLL 9223372036854775808
#define MAXL 2147483647
#define MINL 2147483648
#define LL long long
#define max7 10000007
#define max6 1000006
#define max5 100005
#define pb push_back

bool prime[max7+5];
void sieve(void);
int digit_sum(int n);
void cumulative_sum(void);

int qsum[max6];

int main(){
    sieve();
    cumulative_sum();
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        int k=qsum[b]-qsum[a-1];
        printf("%d\n",k);
    }
    return 0;
}

void sieve(void){
    prime[0]=prime[1]=true;
    for(int i=8;i<max6;i+=6){
        prime[i]=true;
        prime[i-2]=true;
        prime[i-4]=true;
    }
    int sq=sqrt(max6)+2;
    for(int i=3;i<sq;i++){
        if(!prime[i]){
            int k=i<<1;
            for(int j=i*i;j<max6;j+=k){
                prime[j]=true;
            }
        }
    }
}

int digit_sum(int n){
    int sum=0;
    while(n!=0){
        sum+=n-(n/10)*10;
        n/=10;
    }
    return sum;
}

void cumulative_sum(void){
    qsum[2]=1;
    int c=1;
    for(int i=3;i<max6;i+=2){
//        debug(prime[i]);
//        debug(prime[digit_sum(i)]);
        if((!prime[i])&&(!prime[digit_sum(i)])){
            qsum[i]=++c;
            qsum[i-1]=c-1;
        }
        else{
            qsum[i]=c;
            qsum[i-1]=c;
        }
    }
}


