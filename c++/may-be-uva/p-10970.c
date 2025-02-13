#include<stdio.h>
int main()
{
    int p1,p2,c;
    while(scanf("%d%d",&p1,&p2)!=EOF)
    {
        c=(p1*p2)-1;
        printf("%d\n",c);
    }
    return 0;
}
