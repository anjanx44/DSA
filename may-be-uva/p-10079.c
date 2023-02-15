#include<stdio.h>
int main()
{
    long int n,d;
    while(scanf("%ld",&n)==1)
    {
        if(n<0)
        break;
        if(n%2)
        {
            d=n/2+1;
            d=d*n+1;
        }
        else
        {
            d=n/2;
            d=d*n+d+1;
        }
        printf("%ld\n",d);
    }

    return 0;
}
