#include <stdio.h>
#include <math.h>
int main()
{
double r,s,p;
p=4*atan(1);
while(scanf("%lf %lf",&r,&s)==2)
        printf("%.3lf\n",r*r*s*sin((2*p)/s)/2);
return 0;
}

