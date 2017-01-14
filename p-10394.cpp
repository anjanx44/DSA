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
#define max27 20000007-1589999
#define max6 1000006
#define max5 100005
#define pb push_back

bool prime[max27+5];
void sieve(void);
LL a[max5+100000];
int main(){
    sieve();
    int n;
    while(scanf("%d",&n)==1){
        printf("(%lld, %lld)\n",a[n],a[n]+2);
    }
    return 0;
}

void sieve(void){
    prime[0]=prime[1]=true;
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
            if(!prime[i-2]){
                a[c]=i-2;
//                debug(1);
                c++;
            }
        }
    }
//    debug(i);
    for(int j=i;j<max27+2;j+=2){
        if(!prime[j]){
            if(!prime[j-2]){
                a[c]=j-2;
                c++;
            }
        }
    }
}

