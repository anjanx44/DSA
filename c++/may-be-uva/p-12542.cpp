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
#define max6 1000001
#define max5 100001
#define pb push_back

bool prime[max5+5];
void sieve(void);

int main(){
    sieve();
    char s[max6+5];
    while(scanf("%s",s)==1){
        int l=strlen(s),mx;
        if(s[0]=='0'&&l==1) break;
        else{
            mx=-1;
            for(int i=0;i<l;i++){
                int n=0;
                for(int j=i;j<i+6;j++){
                    if(j==l) break;
                    n=n*10+(s[j]-48);
//                    debug(n);
                }
//                debug(n);
                while(n!=0){
                    if(n>100000){
                        n/=10;
                        continue;
                    }
                    if(!prime[n]){
                        mx=max(mx,n);
                        break;
                    }
//                    debug(n);
                    n/=10;
                }
            }
        }
        printf("%d\n",mx);
    }
    return 0;
}


void sieve(void){
    prime[0]=prime[1]=true;
    for(int i=8;i<max5+5;i+=6){
        prime[i]=true;
        prime[i-2]=true;
        prime[i-4]=true;
    }
    int sqn=(int)sqrt(max5+.0);
    for(int i=3;i<=sqn+2;i+=2){
        if(!prime[i]){
            int k=(i<<1);
            for(int j=i*i;j<max5+5;j+=k){
                prime[j]=true;
            }
        }
    }
}

