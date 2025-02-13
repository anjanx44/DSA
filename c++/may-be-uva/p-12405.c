#include<stdio.h>
int main()
{
    int t,i,n,j,c;
    char a[110];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        c=0;
        scanf("%d",&n);
        scanf("%s",a);
        for(j=0;j<n;j++)
        {
            if(a[j]=='#')
            continue;
            c++;
            j+=2;
        }
        printf("case %d: %d\n",i,c);
    }
    return 0;
}
