#include<stdio.h>
int main()
{
    int t,av,i,j,n,a[1010],c,s;
    double r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        c=0;
        s=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            s+=a[j];
        }
        av=s/n;
        for(j=0;j<n;j++)
        {
            if(a[j]>av)
            c++;
        }
        c*=100;
        r=(double)c/(double)n;
        printf("%.3lf",r);
        printf("%%\n");
    }
    return 0;
}
