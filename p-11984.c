#include<stdio.h>
int main()
{
    int t,i;
    float a,b,f;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f%f",&a,&b);
        f=((9*a)/5+32);
        f=f+b;
        printf("Case %d: %.2f\n",i,(5*f-160)/9);
    }
    return 0;
}
