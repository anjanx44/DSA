#include<stdio.h>
int main()
{
    int n,b,h,w,a[15],p,cost,max;
    while(scanf("%d%d%d%d",&n,&b,&h,&w)==4)
    {
        max=30000000;
        for(int i=0;i<h;i++)
        {
            scanf("%d",&p);
            for(int j=0;j<w;j++)
            {
                scanf("%d",&a[j]);
                if(a[j]>=n)
                {
                    cost=n*p;
                }
            }
            if(cost<max)
            {
                max=cost;
            }
        }
        if(max<=b)
        printf("%d\n",max);
        else
        printf("stay home\n");
        max=30000000;
        cost=3000001;
    }
    return 0;
}
