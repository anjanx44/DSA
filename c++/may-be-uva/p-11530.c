#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,c,s,l,j;
    char a[105],b[3];
    scanf("%d",&t);
    gets(b);
    for(i=1;i<=t;i++)
    {
        s=0;
        gets(a);
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]=='a'||a[j]=='d'||a[j]=='g'||a[j]=='j'||a[j]=='m'||a[j]=='p'||a[j]=='t'||a[j]=='w'||a[j]==' ')
            c=1;
            else if(a[j]=='b'||a[j]=='e'||a[j]=='h'||a[j]=='k'||a[j]=='n'||a[j]=='q'||a[j]=='u'||a[j]=='x')
            c=2;
            else if(a[j]=='c'||a[j]=='f'||a[j]=='i'||a[j]=='l'||a[j]=='o'||a[j]=='r'||a[j]=='v'||a[j]=='y')
            c=3;
            else if(a[j]=='s'||a[j]=='z')
            c=4;
            s+=c;
        }
        printf("Case #%d: %d\n",i,s);
    }
    return 0;
}
