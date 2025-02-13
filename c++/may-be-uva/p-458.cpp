#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    while(scanf("%s",a)==1)
    {
        int l=strlen(a);
        for(int i=0;i<l;i++)
        a[i]=a[i]-7;
        printf("%s\n",a);
    }
    return 0;
}
