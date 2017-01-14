#include<stdio.h>
int main()
{
    int d[55],n,i,p,t,c,j,k,o;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(k=1;k<=n;k++)
        scanf("%d",&d[k]);
        c=0;
        for(j=1;j<=n-1;j++)
        {
            p=1;
            while(p<=n-j)
            {
                if(d[p]>d[p+1])
                {
                    o=d[p];
                    d[p]=d[p+1];
                    d[p+1]=o;
                    c++;
                }
                p++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
