#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==-1&&b==-1)break;
        if(a==b)
        {
            printf("0\n");
            continue;
        }
        if(a>b)
        {
            c=a-b;
            if(c<=50)
            printf("%d\n",c);
            else
            printf("%d\n",(100-a)+b);
        }
        else
        {
            c=b-a;
            if(c<=50)
            printf("%d\n",c);
            else
            printf("%d\n",(100-b)+a);
        }
    }
    return 0;
}
