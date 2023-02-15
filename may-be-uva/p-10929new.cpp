#include<stdio.h>
#include<cstring>
int main()
{
    char a[10005];
    while(scanf("%s",a)==1)
    {
        int l=strlen(a);
        if(a[0]=='0'&&l==1) break;
        int sum=0;
        for(int i=0;i<l;i++)
        {
            sum=(sum*10+(a[i]-48))%11;
        }
        if(sum==0)
        printf("%s is a multiple of 11.\n",a);
        else
        printf("%s is not a multiple of 11.\n",a);
    }
    return 0;
}
