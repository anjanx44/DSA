#include<stdio.h>
long long int d[10000000];
long long int a,b,i,j,k,c,m,t;
int main()
{
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
        k=0;
        for(i=a;i<=b;i++)
        {
            c=1;
            j=i;
            printf("j=%d\n",j);
            while(j!=1)
            {
                if(j%2!=0)
                j=3*j+1;
                else
                j/=2;
                c++;

            }
            printf("c=%d\n",c);
            d[k]=c;
            k++;
        }
        m=d[0];
        for(i=0;i<k;i++)
        {
            if(d[i]>m)
            m=d[i];
        }
        printf("%lld %lld %lld\n",a,b,m);
    }
    return 0;
}
