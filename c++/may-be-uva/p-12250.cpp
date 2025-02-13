#include<stdio.h>
#include<string.h>
int main()
{
    char a[15];
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        if(strcmp(a,"HELLO")==0)
        printf("Case %d: ENGLISH\n",i);
        else if(strcmp(a,"HOLA")==0)
        printf("Case %d: SPANISH\n",i);
        else if(strcmp(a,"HALLO")==0)
        printf("Case %d: GERMAN\n",i);
        else if(strcmp(a,"BONJOUR")==0)
        printf("Case %d: FRENCH\n",i);
        else if(strcmp(a,"CIAO")==0)
        printf("Case %d: ITALIAN\n",i);
        else if(strcmp(a,"ZDRAVSTVUJTE")==0)
        printf("Case %d: RUSSIAN\n",i);
        else if(strcmp(a,"#")==0)
        break;
        else
        printf("Case %d: UNKNOWN\n",i);
    }
    return 0;
}
