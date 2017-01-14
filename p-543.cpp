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
#define MAX6 1000000
//#define MAX 100000
#define pb push_back
bool prime[MAX6+6];
void sieve(void);

int main(){
    sieve();
    int n;
    while(scanf("%d",&n)==1&&n){
//        int f=1;
        for(int i=3;i<=n-i;i+=2){
            if(!(prime[i])&&!(prime[n-i])){
                printf("%d = %d + %d\n",n,i,n-i);
                break;
            }
        }
    }
    return 0;
}

void sieve(void){
    prime[0]=prime[1]=true;
    for(int i=8;i<MAX6+5;i+=6){
        prime[i]=true;
        prime[i-2]=true;
        prime[i-4]=true;
    }
    int sqn=(int)sqrt(MAX6+.0);
    for(int i=3;i<=sqn;i+=2){
        if(!prime[i]){
            int k=(i<<1);
            for(int j=i*i;j<MAX6+5;j+=k){
                prime[j]=true;
            }
        }
    }
}
