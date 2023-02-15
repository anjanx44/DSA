#include<stdio.h>
#include<math.h>
double f1(double u,double v,double t);
double f2(double u,double v,double a);
double f3(double u,double a,double s);
double f4(double v,double a,double s);
int test;
int main()
{
    int n;
    double u,v,t,a,s;
    test=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        test++;
        if(n==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
            f1(u,v,t);
        }
        else if(n==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            f2(u,v,a);
        }
        else if(n==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            f3(u,a,s);
        }
        else if(n==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            f4(v,a,s);
        }
    }
    return 0;
}

double f1(double u,double v,double t)
{
    double a,s;
    a=(v-u)/t;
    s=u*t+0.5*a*t*t;
    printf("Case %d: %.3lf %.3lf\n",test,s,a);
}
double f2(double u,double v,double a)
{
    double s,t;
    t=(v-u)/a;
    s=u*t+0.5*a*t*t;
    printf("Case %d: %.3lf %.3lf\n",test,s,t);
}
double f3(double u,double a,double s)
{
    double v,t;
    v=sqrt(u*u+2*a*s);
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf\n",test,v,t);
}
double f4(double v,double a,double s)
{
    double u,t;
    u=sqrt(v*v-2*a*s);
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf\n",test,u,t);
}
