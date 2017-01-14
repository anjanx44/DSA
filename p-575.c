#include<stdio.h>
int main()
{
    long int n,l,p,i;
    char a[1000010];
    while(scanf("%s",a)==1)
    {
        if(a[0]=='0')
        break;
        l=strlen(a);
        p=l;
        n=0;
        for(i=0;i<l;i++)
        {
            n+=(a[i]-'0')*(pow(2,p)-1);
            p--;
        }
        printf("%ld\n",n);
    }
    return 0;
}
