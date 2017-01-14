#include<stdio.h>
int main()
{
    int n,s,i;
    while(scanf("%d",&n)==1)
    {
        if(n>0)
        {
            s=0;
            while(n>=3)
            {
                s+=n/3;
                n=n/3+n%3;
            }
            if(n==2)
            s++;
            printf("%d\n",s);
        }
        else
        break;
    }
    return 0;
}
