#include<stdio.h>
long long com(long long n,long long m);
int main()
{
    long long n,m;
    while(scanf("%lld%lld",&n,&m)==2)
    {
        if(n==0&&m==0) break;
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,m,com(n,m));
    }
    return 0;
}
long long com(long long n,long long m)

{
    if(n-m<m)
    m=n-m;
    long long res=1;
    for(long long i=1;i<=m;i++)
    {
        res=res*n;
        res=res/i;
        n--;
    }
    return res;
}
