#include<stdio.h>
#include<string.h>
int main()
{
    int c=0;
    long int d4,d100,d400,d15,d55,l,i,f,le;
    char a[100011];
    while(scanf("%s",a)==1)
    {
        d4=d100=d400=d15=d55=f=le=0;
        if(c!=0)
        printf("\n");
        c=1;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            d4=(d4*10+a[i]-'0')%4;
            d100=(d100*10+a[i]-'0')%100;
            d400=(d400*10+a[i]-'0')%400;
            d15=(d15*10+a[i]-'0')%15;
            d55=(d55*10+a[i]-'0')%55;
        }
        if((d4==0&&d100!=0)||d400==0)
        {
            printf("This is leap year.\n");
            if(d15==0)
            printf("This is huluculu festival year.\n");
            if(d55==0)
            printf("This is buluculu festival year.\n");
        }
        else
        {
            if(d15==0)
            printf("This is huluculu festival year.\n");
            else
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
