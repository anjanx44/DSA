#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<stdlib.h>
#include<map>
#include<algorithm>
#include<list>
#include<vector>
#include<iostream>
#define pi acos(-1.0)
using namespace std;
typedef long long int ll;
#define MAX 1000001
int primes[MAX] ;
bool sieve[MAX] ;
int l,store;
void genPrimes()
{
    primes[l++] = 2 ;
    long long i,j ;
    for(i=3;i<MAX;i+=2)
    {
        if(sieve[i]==false)
        {
            primes[l++] = i ;
            for(j=i*i;j<MAX;j=j+2*i)   sieve[j] = true ;
        }
    }
    store=j;
}
ll gcd(ll a,ll b)
{
    if(b==0)    return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    genPrimes();
    int T,Case=0;
    cin>>T;
    while(T--)
    {
        ll a,b;
        ll l;
        scanf("%lld %lld %lld",&a,&b,&l);
        ll c = lcm(a,b);
        if(l%c)
        {
            printf("Case %d: impossible\n",++Case);
            continue;
        }
        ll ans=1;
        for(int i=0;i<store,l>1;i++)
        {
            int cntl=0;
            while(l%primes[i]==0)   cntl++,l/=primes[i];
            int cnta=0;
            while(a%primes[i]==0)   cnta++,a/=primes[i];
            int cntb=0;
            while(b%primes[i]==0)   cntb++,b/=primes[i];
            int x=max(cnta,cntb);
            if(cntl==x)    continue;
            else ans=ans*(pow(primes[i],cntl));
        }
        printf("Case %d: %lld\n",++Case,ans);
    }
}
