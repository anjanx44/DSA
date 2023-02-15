#include<string.h>
#include<stdio.h>
int main()
{
    char a[105];
    int t,i,c;
    long int s=0,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        c=strcmp(a,"donate");
        if(c==0)
        {
            scanf("%ld",&b);
            s+=b;
            continue;
        }
        printf("%ld\n",s);
    }
    return 0;
}
