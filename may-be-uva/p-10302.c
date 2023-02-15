#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int n,i;
    long double s=0;
    while(scanf("%u",&n)==1)
    {
        for(i=1;i<=n;i++)
        s+=pow(i,3);
        printf("%.0Lf\n",s);
        s=0;
    }
    return 0;
}
