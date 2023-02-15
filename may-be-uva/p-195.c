#include<stdio.h>
#include<string>
void generate(int);
int p[100],v[100]={0},n;
string s;
int main()
{
    while(scanf("%s",s)==1)
    {
        int i=0;
        n=s.size(s);
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
        if(v[j==0])
        {
            v[j]=1;
            p[i]=j;
            generate(i+1);
            v[j]=0;
        }
    }
}
