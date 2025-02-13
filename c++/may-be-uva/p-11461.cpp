#include<stdio.h>
#include<math.h>
int main()
{
    long a,b,i,c,k;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        c=0;
        if(a==0&&b==0) break;
        for(i=a;i<=b;i++)
        {
            k=sqrt(i);
            if(k*k==i)
            c++;
        }
        printf("%ld\n",c);
    }
    return 0;
}
