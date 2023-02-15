#include<stdio.h>
int main()
{
    int n,f,p,i,a[4000],d;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        p=n-1;
        for(i=0;i<n-1;i++)
        {
            d=a[i+1]-a[i];
            if(d<0)
            d=-d;
            if(d==p)
            f=1;
            else
            {
                f=0;
                break;
            }
            p--;
        }
        if(f==0)
        printf("Not jolly\n");
        else
        printf("Jolly\n");
    }
    return 0;
}
