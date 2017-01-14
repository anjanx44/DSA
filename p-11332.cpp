#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        int sum=0;
        while(n!=0)
        {
            sum+=n%10;
            n/=10;
        }
        n=0;
        while(sum!=0)
        {
            n+=sum%10;
            sum/=10;
        }
        sum=0;
        while(n!=0)
        {
            sum+=n%10;
            n/=10;
        }
        printf("%d\n",sum);
    }

}
