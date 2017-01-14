#include<stdio.h>
int main()
{
    long long n,i,f;
    while(scanf("%lld",&n)==1)
    {
        f=1;
        if(n<0&&n%2==0)
        printf("Underflow!\n");
        else if(n<0&&n%2!=0)
        printf("Overflow!\n");
        else if(n>=0&&n<=7)
        printf("Underflow!\n");
        else if(n>13)
        printf("Overflow!\n");
        else
        {
            for(i=1;i<=n;i++)
            f*=i;
            printf("%lld\n",f);
        }
    }
    return 0;
}
