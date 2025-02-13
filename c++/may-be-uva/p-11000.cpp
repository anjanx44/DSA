#include<stdio.h>
int main()
{
    long long int n,a[100],b[100],i;
        a[0]=1;
        a[1]=2;
        b[0]=0;
        b[1]=1;
        b[2]=2;
        for(i=2;i<=55;i++)
        {
            a[i]=a[i-1]+a[i-2]+1;
            b[i+1]=a[i];
        }

    while(scanf("%lld",&n)==1)
    {
        if(n==-1) break;
        printf("%lld %lld\n",b[n],a[n]);

    }
    return 0;
}
