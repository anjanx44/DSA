#include<stdio.h>
int main()
{
    int n,sum,c;
    while(scanf("%d",&n)==1)
    {
        sum=0;
        c=1;
        sum=(sum*10+1)%n;
        while(sum!=0)
        {
            sum=(sum*10+1)%n;
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
