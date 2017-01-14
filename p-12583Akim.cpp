#include<stdio.h>
int main()
{
    int test,t=0,i,j,n,k,p,count;
    char a[600];
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d%s",&n,&k,a);
        count=0;
        for(i=0;i<n;i++)
        {
            for(j=1;j<=k;j++)
            {
                p=i-j;
                if(p<0) break;
                if(a[i]==a[p])
                {
                    count++;
                    break;
                }
            }
        }
        printf("Case %d: %d\n",++t,count);
    }
    return 0;
}
