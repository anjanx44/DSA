#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
#define ll long long

#define mx 1000009
bool cp[1000009];
ll sp[1000009];
ll ans[mx];

void sieve(void){
    for(int i=4;i<=mx;i+=2){
        cp[i]=1;
    }
    ll m=0;
    sp[m++]=2;
    ll sq=(ll)(sqrt(mx))+50;
//    printf("sq=%lld\n",sq);
    for(ll i=3;i<=sq;i+=2){
        if(cp[i]==0){
            sp[m++]=i;
            ll k=i<<1;
            for(ll j=i*i;j<=mx;j+=k){
                cp[j]=1;
            }
        }
    }
}

ll divisor(ll n){
    ll sq=(ll)sqrt(n);
    ll ans=1;
    for(ll i=0;sp[i]<=sq;i++){
        if(n%sp[i]==0){
            ll cnt=0;
            while(n%sp[i]==0){
                n/=sp[i];
                cnt++;
            }
            ans*=(cnt+1);
            sq=(ll)(sqrt(n));
        }
    }
    if(n>1){
        ans*=2;
    }

    return ans;
}



int main(){
    sieve();


    ans[1]=1;

    ll mx_div=1;
    ll mxn=1;

//    printf("%lldaaa\n",divisor(1000000));


    for(ll i=2;i<=1000000;i++){
        ll n=divisor(i);
        if(n>=mx_div){
            mx_div=n;
            mxn=i;
        }
        ans[i]=mxn;
    }

    ll t;
    scanf("%lld",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        printf("%lld\n",ans[n]);
    }






    return 0;
}
