#include<stdio.h>
int main()
{
    int n,i,t,a,b,c,d,e,f,g,h,j,k,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0;
        for(i=1;i<=n;i++)
        {
            p=i;
            while(p!=0)
            {
                if(p%10==0)
                a++;
                else if(p%10==1)
                b++;
                else if(p%10==2)
                c++;
                else if(p%10==3)
                d++;
                else if(p%10==4)
                e++;
                else if(p%10==5)
                f++;
                else if(p%10==6)
                g++;
                else if(p%10==7)
                h++;
                else if(p%10==8)
                j++;
                else if(p%10==9)
                k++;
                p/=10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,j,k);
    }
    return 0;
}
