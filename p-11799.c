#include<stdio.h>
int main()
{
    int test,i,j,a[105],max,n;
    scanf("%d",&test);
    for(j=1;j<=test;j++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        max=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>max)
            max=a[i];
        }
        printf("Case %d: %d\n",j,max);
    }
    return 0;
}
