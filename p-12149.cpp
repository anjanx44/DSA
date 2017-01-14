#include<stdio.h>
int main()
{
    long int n,sum,i;
    while(1)
    {
        sum=0;
        scanf("%ld",&n);
        if(n==0) break;
        else
        {
            for(i=1;i<=n;i++)
            sum+=i*i;
            printf("%ld\n",sum);
        }
    }
    return 0;
}

