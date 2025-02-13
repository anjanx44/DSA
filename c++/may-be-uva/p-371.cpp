
#include<stdio.h>
int main()
{
    long long a,b,k;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        k=1;
        if(a==0&&b==0) break;
        if(a>b)
        {
            k=0;
            long long t=a;
            a=b;
            b=t;
        }

        long long s=0,n=0,c,p,i;
        for(i=b;i>=a;i--)
        {
            c=1;
            p=i;
             if(p%2==0)
                p/=2;
                else
                p=3*p+1;
            while(p!=1)
            {
                if(p%2==0)
                p/=2;
                else
                p=3*p+1;
                c++;
            }
            if(c>=s)
            {
                s=c;
                n=i;
            }
        }
        if(k==0)
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,n,s);
        else
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,n,s);
    }
    return 0;
}
