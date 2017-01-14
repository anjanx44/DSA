#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int n;
    double s;
    while(scanf("%ud",&n)==1)
    {
        if(n==0) break;
        s=sqrt(n);
        if(s==(int)s)
        printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}
