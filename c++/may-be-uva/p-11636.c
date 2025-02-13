#include<stdio.h>
int main()
{
    int i,n,j;
    for(j=1;j<=2000;j++)
    {
        int count=0;
        scanf("%d",&n);
        if(n<0) break;
        for(i=1;i<=n;i=i*2)
        {
            count++;
           if(i==n)
           break;
        }
        if(i>n)
        count++;
        printf("Case %d: %d\n",j,count-1);
    }
    return 0;
}
