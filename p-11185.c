#include<stdio.h>
int main()
{
    long long i,j,n;
    int a[1005];
    for(j=0;j<100;j++)
    {
        scanf("%lld",&n);
        if(n<0)break;
        if(n==0)printf("0\n");
        else
        {
            i=0;
            while(n!=0)
            {
                a[i]=n%3;
                n=n/3;
                i++;
            }
            for(i=i-1;i>=0;i--)
            printf("%d",a[i]);
            printf("\n");
        }
    }
    return 0;
}

