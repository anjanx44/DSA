#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,area;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        if(a+b<=c||a+c<=b||b+c<=a)
        {
            printf("-1.000\n");
            continue;
        }
        d=(a+b+c)/2;
        area=(4*sqrt(d*(d-a)*(d-b)*(d-c)))/3;
        printf("%.3f\n",area);
    }
    return 0;
}
