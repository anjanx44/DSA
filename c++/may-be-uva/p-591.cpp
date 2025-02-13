#include<stdio.h>
int main()
{
    int n,h[105],sum,avg,i,c=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=0;
        c++;
        for(i=0;i<n;i++)
        {
            scanf("%d",&h[i]);
            sum+=h[i];
        }
        avg=sum/n;
        sum=0;
        for(i=0;i<n;i++)
        {
            if(avg<h[i])
            sum+=(h[i]-avg);
        }
        printf("Set #%d\n",c);
        printf("The minimum number of moves is %d.\n\n",sum);
    }
    return 0;
}
