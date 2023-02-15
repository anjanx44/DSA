#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    char a[30],b[30];
    while(gets(a))
    {
        gets(b);
        int sum=0;
        int l=strlen(a);
        for(int i=0;i<l;i++)
        {
            if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
            {
                if(a[i]>=65&&a[i]<=90)
                sum+=a[i]-64;
                else
                sum+=a[i]-96;
            }
        }
        double a;
        while(sum!=0)
        {
            a=sum%10+sum/10;
            if(a>9)
            sum=a;
            else
            sum-=sum;
        }
        //a.erase();
        sum=0;
        l=strlen(b);
        for(int i=0;i<l;i++)
        {
            if(b[i]>=65&&b[i]<=90||b[i]>=97&&b[i]<=122)
            {
                if(b[i]>=65&&b[i]<=90)
                sum+=b[i]-64;
                else
                sum+=b[i]-96;
            }
        }
        double c;
        while(sum!=0)
        {
            c=sum%10+sum/10;
            if(c>9)
            sum=c;
            else
            sum-=sum;
        }
        double d;
        if(a>c)
        d=(c/a)*100;
        else
        d=(a/c)*100;
        printf("%.2lf %%\n",d);

    }
    return 0;
}
