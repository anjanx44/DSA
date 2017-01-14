#include<stdio.h>
int main()
{
    int t;
    double x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf",&x,&y,&z);
        printf("%.0lf\n",(double)((x-((x+y)/3)))*(z/((x+y)/3)));
    }
    return 0;
}
