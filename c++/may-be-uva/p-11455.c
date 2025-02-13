#include<stdio.h>
int main()
{
    long a,b,c,d,max;
    int test,j;
    scanf("%d",&test);
    for(j=1;j<=test;j++)
    {
        scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
        if(a>=b&&a>=c&&a>=d)
        max=a;
        else if(b>=a&&b>=c&&b>=d)
        max=b;
        else if(c>=b&&c>=a&&c>=d)
        max=c;
        else
        max=d;
       if(a==b&&b==c&&c==d)
       printf("square\n");
       else if(a==c&&b==d)
       printf("rectangle\n");
       else if(max==a)
       {
           if((b+c+d)>a)
           printf("quadrangle\n");
           else
           printf("banana\n");
       }
       else if(max==b)
       {
          if((a+c+d)>b)
           printf("quadrangle\n");
           else
           printf("banana\n");
       }
       else if(max==c)
       {
            if((a+b+d)>c)
           printf("quadrangle\n");
           else
           printf("banana\n");
       }
       else if(max==d)
       {
           if((a+b+c)>d)
           printf("quadrangle\n");
           else
           printf("banana\n");
       }
    }
    return 0;
}
