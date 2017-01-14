#include<stdio.h>
#include<math.h>
int main()
{
    long n,m,j,temp;
    int i,count,r;
    for(i=1;i<=201;i++)
    {
        count=0;
        scanf("%ld%ld",&n,&m);
        if(n==0&&m==0)
        break;
        for(j=n;j<=m;j++)
        {
           r=sqrt(j);
           if(r*r==j)
           count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
