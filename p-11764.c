#include<stdio.h>
int main()
{
    int t,i,j,c1,c2,n,a[55];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        c1=0;
        c2=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        scanf("%d",&a[j]);
        for(j=0;j<n-1;j++)
        {
            if(a[j+1]>a[j])
            c1++;
            else if(a[j+1]<a[j])
            c2++;
        }
        printf("Case %d: %d %d\n",i,c1,c2);
    }
    return 0;
}
