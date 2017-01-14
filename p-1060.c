#include<stdio.h>
int main()
{
    int i,j,a[1005],n,t,c;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[j]<=a[i])
                {
                    c++;
                }
            }
        }
        printf("%d\n",c);
    }
}
