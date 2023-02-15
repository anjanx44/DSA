#include<stdio.h>
#include<string.h>
void generate(int);
int v[100000]={0},n;
char s[100000],p[1000000];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        n=strlen(s);
        int i=0;
        generate(i);
    }
    return 0;
}


void generate(int i)
{
    if(i==n)
    {
        for(int j=0;j<n;j++)
        printf("%c",p[j]);
        printf("\n");
        return;
    }

    for(int j=0;j<n;j++)
    {
        if(v[j]==0)
        {
            v[j]=1;
            p[i]=s[j];
            generate(i+1);
            v[j]=0;
        }
    }
}
