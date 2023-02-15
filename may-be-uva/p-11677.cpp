#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4)
    {
        if(a==0&&b==0&&c==0&&d==0)
        break;
        else if(a==c&&b==d)
        e=24*60;
        else if(a>c&&b==d)
        e=(24-a+c)*60;
        else if(a<c&&b==d)
        e=(c-a)*60;
        else if(a<c&&b<d)
        e=(c-a)*60+(d-b);
        else if(a<c&&b>d)
        e=(c-a-1)*60+(60-b+d);
        else if(a==c&&b<d)
        e=(d-b);
        else if(a==c&&b>d)
        e=23*60+(60-b+d);
        else if(a>c&&b<d)
        e=(24-a+c)*60+(d-b);
        else if(a>c&&b>d)
        e=(23-a+c)*60+(60-b+d);
        printf("%d\n",e);
    }
    return 0;
}
