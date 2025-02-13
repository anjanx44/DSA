#include<stdio.h>
int main()
{
    char a[100000],b[100000];
    int i,j;
    while(scanf("%s %s",a,b)==2)
    {
        j=0;
        for(i=0;b[i]&&a[j];i++)
        {
            if(b[i]==a[j])
            {
                j++;
            }
        }
        if(!a[j])
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}
