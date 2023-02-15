#include<stdio.h>
int main()
{
    long a,b,c;
    int test,i;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if(((a+b)<c)||((b+c)<a)||((a+c)<b))
        printf("Case %d: Invalid\n",i);
        else  if(a==b&&b==c)
        printf("Case %d: Equilateral\n",i);
        else if((a==b)||(a==c)||(b==c))
        printf("Case %d: Isosceles\n",i);
        else
        printf("Case %d: Scalene\n",i);

     }
     return 0;
}
