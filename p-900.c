#include<stdio.h>
int main()
{
    long long a[55];
    int i,n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        else
        {
            a[0]=1;
            a[1]=1;
            for(i=2;i<=n;i++)
            a[i]=a[i-2]+a[i-1];
            printf("%lld\n",a[n]);
        }
    }
    return 0;
}
