#include<stdio.h>
#include<string.h>
int main()
{
    char a[105];
    while(1)
    {
        scanf("%s",a);
        int l=strlen(a),sum=0;
        if(a[0]=='0') break;
        for(int i=0;i<l;i++)
        {
            sum=(sum*10+(a[i]-'0'))%17;
        }
        if(sum==0)
        printf("1\n");
        else
        printf("0\n");
    }
    return 0;
}
