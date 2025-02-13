#include<stdio.h>
int main()
{
    char a[10];
    int i=0;
    while(scanf("%s",a)==1)
    {
        if(a[0]=='*') break;
        else if(a[0]=='H') printf("Case %d: Hajj-e-Akbar\n",++i);
        else printf("Case %d: Hajj-e-Asghar\n",++i);
    }
    return 0;
}
