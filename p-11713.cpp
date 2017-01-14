#include<stdio.h>
#include<string.h>
int main()
{
    int n,l,l1,i,c;
    char a[25],b[25];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s%s",a,b);
        l=strlen(a);
        l1=strlen(b);
        if(l!=l1)
        {
            printf("No\n");
            continue;
        }
        else
        {
            c=0;
            for(i=0;i<l;i++)
            {
                if(a[i]!=b[i])
                {
                    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                    {
                        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
                        c++;
                        else
                        break;
                    }
                    else break;
                }
                else
                c++;
            }
        }
        if(c==l)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}
