#include<stdio.h>
int main()
{
    long x,y,n,k,i,a;
    while(scanf("%ld%ld%ld",&y,&k,&n)==3)
    {
        int f=0;
        for(i=1;i<=k;i++)
        {
            a=y+i;
            if(a<=n&&a%k==0)
            {
                printf("%ld ",i);
                f=1;
                a=i;
                break;
            }
        }
        a=a+k;
        while((a+y)<=n)
        {
            printf("%ld ",a);
            a=a+k;
        }

        if(f==0)
        printf("-1\n");
        else
        printf("\n");
    }
    return 0;
}
