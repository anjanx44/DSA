#include<stdio.h>
int main()
{
    int t,a,b,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d:%d",&a,&b);
        if(a>=12)
        a=a-12;
        if(b==0)
        {
            if(a==12)
            a=12;
            else
            a=12-a;
        }
        else
        {
            a=11-a;
            b=60-b;
        }
        if(a==0)
        a=12;
        printf("%02d:%02d\n",a,b);
    }
    return 0;
}
