#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,i,n,k,p,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&k,&p);
        d=k+p;
        d=d%n;
        if(d==0)
        d=n;
        printf("Case %d: %d\n",i,d);
    }
    return 0;
}
