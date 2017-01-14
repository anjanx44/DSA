#include<stdio.h>
int main()
{
    int t,i=0,n,s[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %s",&n,s);
        if(n%2==1)
        printf("Case %d: Bob\n",++i);
        else
        printf("Case %d: Alice\n",++i);

    }
    return 0;
}
