#include<stdio.h>
int main()
{
    int test,i,j,e,f,c;
    scanf("%d",&test);
    for(j=1;j<=test;j++)
    {
        scanf("%d%d%d",&e,&f,&c);
        e=e+f;
        int total=0;
        while(e>=c)
        {
            total=total+e/c;
            e=e/c+e%c;
        }
        printf("%d\n",total);
    }
    return 0;
}
