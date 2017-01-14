#include<stdio.h>
#include<string.h>
int main()
{
    int d,k,t,i,s,c[110],j;
    char a[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&s);
        k=0;
        for(j=1;j<=s;j++)
        {
            scanf("%s",a);
            if(strcmp(a,"LEFT")==0)
            c[j]=-1;
            else if(strcmp(a,"RIGHT")==0)
            c[j]=1;
            else
            {
                scanf("%s%d",a,&d);
                c[j]=c[d];
            }
            k+=c[j];
        }
        printf("%d\n",k);
    }
    return 0;
}
