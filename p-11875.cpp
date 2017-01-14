#include<stdio.h>
int main()
{
    int n,t,a[25],i,cse=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Case %d: %d\n",++cse,a[n/2]);
    }
    return 0;
}
