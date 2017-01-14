#include<stdio.h>
int main()
{
    int t,a,b,s,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        s=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(j%2)
            s+=j;
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
