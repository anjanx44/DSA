#include<stdio.h>
#include<math.h>
int main()
{
     long double a,b,c,at,ac,r1,r2,abc,s;
	 while(scanf("%Lf%Lf%Lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
		  at=sqrt((s*(s-a)*(s-b)*(s-c)));
        r1=at/s;
        if(a>b&&a>c)
        r2=a/2;
        else if(b>a&&b>c)
        r2=b/2;
        else
        r2=c/2;
        ac=3.1416*r1*r1;
        abc=3.1416*r2*r2;
        printf("%.4Lf %.4Lf %.4Lf\n",abc-at,at-ac,ac);
    }
    return 0;
}
