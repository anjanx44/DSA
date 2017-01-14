#include<stdio.h>
int a[1000002],b[1000002],n,m,c,res[1000002],i;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&a[i],&b[i]);
        }
        c=0;
        for(i=m-1;i>=0;i--)
        {
            res[i]=(a[i]+b[i]+c)%10;
            c=(a[i]+b[i]+c)/10;
        }
        for(i=0;i<m;i++)
        {
            printf("%d",res[i]);
        }
        if(n)
        printf("\n\n");
        else
        printf("\n");
    }
    return 0;
}
