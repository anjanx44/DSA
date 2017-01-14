#include<stdio.h>
int a[2000000];
int main()
{
    long int n,i,p,t;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
        break;
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
            for(i=1;i<=n-1;i++)
            {
                p=1;
                while(p<=n-i)
                {
                    if(a[p]>a[p+1])
                    {
                        t=a[p+1];
                        a[p+1]=a[p];
                        a[p]=t;
                    }
                    p++;
                }
            }
            for(i=1;i<=n;i++)
            printf("%d ",a[i]);
            printf("\n");
    }
    return 0;
}
