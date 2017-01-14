#include<stdio.h>
#include<math.h>
int main()
{
    double amount,tax;
    int test,j;
    scanf("%d",&test);
    for(j=1;j<=test;j++)
    {
        scanf("%lf",&amount);
        if(amount<=180000)
        {
            printf("Case %d: 0\n",j);
            continue;
        }
        if(amount<=480000)
        tax=((amount-180000)*10)/100;
        else if(amount<=880000)
        tax=30000+((amount-480000)*15)/100;
        else if(amount<=1180000)
        tax=90000+((amount-880000)*20)/100;
        else
        tax=150000+((amount-1180000)*25)/100;
        tax=ceil(tax);
        if(tax<2000)
        printf("Case %d: 2000\n",j);
        else
        printf("Case %d: %.lf\n",j,tax);
    }
    return 0;
}

