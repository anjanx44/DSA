#include<stdio.h>
#include<string.h>
int main()
{
    char a[260],b[260];
    int t,l,len,e,f,i,r,s,d,p,c,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s%s",a,b);
        l=strlen(a);
        len=strlen(b);
        if(l>len)
        {
            for(i=len;i<l;i++)
            {
                b[i]='0';
                b[len]='\0';
            }
        }
        if(l<len)
        {
            for(i=l;i<len;i++)
            {
                a[i]='0';
                a[l]='\0';
            }
        }
        r=0;
        f=0;
        c=0;
        k=0;
        for(i=0;i<l;i++)
        {
            d=a[i]-'0';
            e=b[i]-'0';
            s=d+e;
            if(f>0)
            {
            s=s+f;
            f=0;
            }
            if(s>=10){
            f=s/10;
            r=s%10;
            s=r;
            }
            else if(s<10)
            a[i]=s;
            /*if((s!=0)&&(k==0)){
            a[i]=s;
            k=1;
            }
            else if((s!=0)&&(k==1))
            {
            a[i]=s;
            }
            else if((s==0)&&(k==1))
            {
            a[i]=s;
            }*/

        }
        for(i=0;i<l;i++)
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
