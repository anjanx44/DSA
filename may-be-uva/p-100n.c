#include<stdio.h>
int main()
{
    long int a,b,i,c,t,cl,ti,tj,n;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        ti=a;
        tj=b;
        if(ti>tj)
        {
            t=ti;
            ti=tj;
            tj=t;
        }
        cl=0;
        while(ti<=tj)
        {
            n=ti;
            c=1;
            while(n!=1)
            {
                if(!(n%2))
                n=n/2;
                else
                n=(3*n)+1;
                c++;
            }
            if(c>cl)
            cl=c;
            ti++;
        }
        printf("%ld %ld %ld\n",a,b,cl);
    }
    return 0;
}
