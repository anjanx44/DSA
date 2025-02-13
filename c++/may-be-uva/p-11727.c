#include<stdio.h>
int main()
{
    int t,i,a,b,c,mid;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a>b&&a<c)||(a>c&&a<b))
        mid=a;
        else if((b>a&&b<c)||(b>c&&b<a))
        mid=b;
        else
        mid=c;
        printf("Case %d: %d\n",i,mid);
    }

    return 0;
}
