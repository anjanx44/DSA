#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<cstring>
#include<queue>
#include<map>

using namespace std;

#define debug(x) cout<<#x<<'='<<x<<endl;
#define MAXLL 9223372036854775807
#define MINLL 9223372036854775808
#define MAXL 2147483647
#define MINL 2147483648
#define LL long long
#define max8 100000008
#define max7 10000007
#define max27 1099
#define max6 1000006
#define max5 100005
#define pb push_back

bool prime[max27+5];
void sieve(void);

int main(){
    sieve();
    char s[30];
    while(scanf("%s",s)==1){
        int l=strlen(s),sum=0;
        for(int i=0;i<l;i++){
            if(s[i]>='a'&&s[i]<='z'){
                sum+=s[i]-96;
            }
            else{
                sum+=s[i]-38;
            }
        }
//        debug(sum);
//        debug(prime[sum]);
        if(!prime[sum]){
            printf("It is a prime word.\n");
        }
        else{
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}

void sieve(void){
    prime[0]=true;
    for(int i=8;i<max27+2;i+=2){
        prime[i]=true;
        prime[i-2]=true;
        prime[i-4]=true;
    }
    int sq=sqrt(max27)+2,c=1;
    int i;
    for(i=3;i<=sq;i+=2){
        if(!prime[i]){
            int k=i<<1;
            for(int j=i*i;j<=max27+2;j+=k){
                prime[j]=true;
            }
        }
    }
}

