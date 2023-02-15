#include<stdio.h>
int main()
{
    long long n,p,c,i=0;;
    while(scanf("%lld",&n)==1)
    {
        if(n<0) break;
        else if(n==1)
        {
            printf("Case %lld: 0\n",++i);
        }
        else
        {
            p=2;
            c=1;
            while(1)
            {
                if(p>n||p==n) break;
                p=p*2;
                c++;
            }
            printf("Case %lld: %lld\n",++i,c);
        }
    }
    return 0;
}
