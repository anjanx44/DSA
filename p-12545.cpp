#include<stdio.h>
#include<string.h>
int main()
{
    int t,l,k=0,i,c,co;
    char a[1005],b[1005];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s%s",a,b);
        l=strlen(a);
        int p=0,q=0;
        for(int i=0;i<l;i++)
        {
            if(a[i]=='1') p++;
            if(b[i]=='1') q++;
        }
        if(p>q)
        printf("Case %d: -1\n",++k);
        else if(p==q)
        {
            c=0;
            for(i=0;i<l;i++)
            {
                if(a[i]=='?')
                {
                    a[i]='0';
                    c++;
                }
            }
            co=0;
            for(i=0;i<l;i++)
            {
                if(a[i]!=b[i])
                {
                    co++;
                }
            }
            c=c+co/2;
            printf("Case %d: %d\n",++k,c);
        }
        else if(p<q)
        {
            c=0;
            for(i=0;i<l;i++)
            {
                if(p==q) break;
                if(a[i]=='?')
                {
                    a[i]='1';
                    c++;
                    p++;
                }
            }
            i=0;
            while(p!=q)
            {
                if(b[i]=='1')
                {
                    a[i]='1';
                    c++;
                    p++;
                }
                i++;
            }
            for(i=0;i<l;i++)
            {
                if(a[i]=='?')
                {
                    a[i]='0';
                    c++;
                }
            }
            co=0;
            for(i=0;i<l;i++)
            {
                if(a[i]!=b[i])
                co++;
            }
            c=c+co/2;
            printf("Case %d: %d\n",++k,c);
        }
    }
    return 0;
}
