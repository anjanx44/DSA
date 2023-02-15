#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,l;
    char a[15];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        l=strlen(a);
        if(l==3)
        {
            if(((a[0]=='o')&&(a[1]=='n'||a[2]=='e'))||((a[1]=='n')&&(a[0]=='o'||a[2]=='e'))||((a[2]=='e')&&(a[0]=='o'||a[1]=='n')))
            printf("1\n");
            else if(((a[0]=='t')&&(a[1]=='w'||a[2]=='o'))||((a[1]=='w')&&(a[0]=='t'||a[2]=='o'))||((a[2]=='o')&&(a[0]=='t'||a[1]=='w')))
            printf("2\n");
            else if(((a[0]=='s')&&(a[1]=='i'||a[2]=='x'))||((a[1]=='i')&&(a[0])=='s'||a[2]=='x')||((a[2]=='x')&&(a[0]=='s'||a[1]=='i')))
            printf("6\n");
            else
            printf("10\n");
        }
        else if(l==4)
        {
            if((a[0]=='f'&&a[1]=='o')||(a[2]=='u'&&a[3]=='r'))
            printf("4\n");
            else if((a[0]=='f'&&a[1]=='i')||(a[2]=='v'&&a[3]=='e'))
            printf("5\n");
            else
            printf("9\n");
        }
        else if(l==5)
        {
            if((a[0]=='t'&&a[1]=='h')||(a[3]=='e'&&a[4]=='e'))
            printf("3\n");
            else if((a[0]=='s'&&a[1]=='e')||(a[3]=='e'&&a[4]=='n'))
            printf("7\n");
            else
            printf("8\n");
        }
    }
    return 0;
}
