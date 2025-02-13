#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int b,cb,l,c,cn,i,d,p,x[250],f;
    char a[250];
    while(scanf("%d%d%s",&b,&cb,a)!=EOF)
    {
        f=0;
        cn=0;
        d=0;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]=='A')
            x[i]=10;
            else if(a[i]=='B')
            x[i]=11;
            else if(a[i]=='C')
            x[i]=12;
            else if(a[i]=='D')
            x[i]=13;
            else if(a[i]=='E')
            x[i]=14;
            else if(a[i]=='F')
            x[i]=15;
            else if(a[i]=='1')
            x[i]=1;
            else if(a[i]=='2')
            x[i]=2;
            else if(a[i]=='3')
            x[i]=3;
            else if(a[i]=='4')
            x[i]=4;
            else if(a[i]=='5')
            x[i]=5;
            else if(a[i]=='6')
            x[i]=6;
            else if(a[i]=='7')
            x[i]=7;
            else if(a[i]=='8')
            x[i]=8;
            else if(a[i]=='9')
            x[i]=9;
            else if(a[i]=='0')
            x[i]=0;
        }
        for(i=0;i<l;i++)
        {
            if(x[i]>=b)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        printf("%s is an illegal base %d number\n",a,b);
        else
        {
            p=l-1;
            for(i=0;i<l;i++)
            {
                d+=x[i]*pow(b,p);
                p--;
            }
            c=0;
            i=0;
            while(d!=0)
            {
                x[i]=d%cb;
                d=d/cb;
                c++;
                i++;
            }
            p=c-1;
            cn=0;
            for(i=c-1;i>=0;i--)
            {
                cn+=x[i]*(pow(10,p));
                p--;
            }
            printf("%s base %d = %d base %d\n",a,b,cn,cb);
        }
    }
    return 0;
}
