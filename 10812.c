#include<stdio.h>
int main()
{
    int t , a,b,i,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        x=a+b;  y=a-b;
        if((x%2||y%2)||y<0)
        printf("impossible\n");
        else
        printf("%d %d\n",x/2,y/2);
    }
    return 0;
}
