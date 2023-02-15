#include<stdio.h>
int main()
{
    long long n,d;
    int i=0;
    while(scanf("%lld",&n)==1)
    {
        printf("%d. ",++i);
        d=n/10000000;
        if(d!=0)
        {
            n=n-d*10000000;
            printf("%d kuti ",d);
        }
        d=n/100000;
        if(d!=0)
        {
            n=n-d*100000;
            printf("%d lakh ",d);
        }
        d=n/1000;
        if(d!=0)
        {
            n=n-d*1000;
            printf("%d hajar ",d);
        }
        d=n/100;
        if(d!=0)
        {
            n=n-d*100;
            printf("%d shata ",d);
        }
        printf("%d\n",n);
    }
    return 0;
}
