#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    long long n,r;
    char a[20];
    while(scanf("%s",a)==1)
    {
        int l=strlen(a);
        sort(a,a+l);
        n=0;
        for(int i=0;i<l;i++)
        n+=(a[i]-'0')*pow(10,i);
        if(a[0]=='0')
        {
            for(int i=0;i<l;i++)
            {
                if(a[i]!='0')
                {
                    a[0]=a[i];
                    a[i]='0';
                    break;
                }
            }
        }
        r=0;
        for(int i=0;i<l;i++)
        r=r*10+(a[i]-'0');
        long long d=n-r,m;
        m=d/9;
        printf("%lld - %lld = %lld = 9 * %lld\n",n,r,d,m);

    }
}
