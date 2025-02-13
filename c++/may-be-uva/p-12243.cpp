#include<stdio.h>
#include<string.h>
int main()
{
    int l,f,i;
    char a[1050];
    while(gets(a))
    {
        f=1;
        l=strlen(a);
        if(a[0]=='*'&&l==1) break;
        for(i=0;i<l;i++)
        {
            if(a[i]==' ')
            {
                if(!((a[0]==a[i+1])||(a[0]==a[i+1]-32)||(a[0]==a[i+1]+32)))
                {
                    f=0;
                    break;
                }
            }
        }
        if(f==0)
        printf("N\n");
        else
        printf("Y\n");
    }
    return 0;
}
