#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    char a[12],b[12],c[12];
    int p,q,v;
    while(scanf("%s%s",a,b)==2)
    {
        int j=0;
        for(int i=0;i<12;i++)
            c[i]='0';
        if(a[0]=='0'&&b[0]=='0') break;
        else
        {
            p=strlen(a);
            q=strlen(b);
            v=abs(p-q);
            if(p>q)
            {
                int l=p;
                int k=0;
                for(int i=v;i<p;i++,k++)
                c[i]=b[k];
                c[p]='\0';
                for(int i=l-1;i>=0;i--)
                {
                    k=(a[i]-'0')+(c[i]-'0');
                    if(k>=10)
                    {
                        j++;
                        a[i-1]++;
                    }
                }
            }
            else
            {
                int l=q;
                int k=0;
                for(int i=v;i<=q;i++,k++)
                c[i]=a[k];
                c[q]='\0';
                for(int i=l-1;i>=0;i--)
                {
                    k=(b[i]-'0')+(c[i]-'0');
                    if(k>=10)
                    {
                        j++;
                        b[i-1]++;
                    }
                }
            }
            if(j==0)
            printf("No carry operation.\n");
            else if(j==1)
            printf("1 carry operation.\n");
            else
            printf("%d carry operations.\n",j);
        }
    }
    return 0;
}
