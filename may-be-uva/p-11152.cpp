#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
    double s,a,b,c,area_of_triangle,diameter,area_of_big_circle,radious_of_small_circle,small_circle_area;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        area_of_triangle=sqrt(s*(s-a)*(s-b)*(s-c));
        diameter=(a*b*c)/(2*area_of_triangle);
        area_of_big_circle=pi*(diameter/2)*(diameter/2);
        radious_of_small_circle=sqrt(((s-a)*(s-b)*(s-c))/s);
        small_circle_area=pi*radious_of_small_circle*radious_of_small_circle;
        area_of_big_circle=area_of_big_circle-area_of_triangle;
        area_of_triangle=area_of_triangle-small_circle_area;
        printf("%.4lf %.4lf %.4lf\n",area_of_big_circle,area_of_triangle,small_circle_area);
    }
    return 0;
}
