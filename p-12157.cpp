#include<stdio.h>
int main()
{
    int t,i,a[25],n,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int mi=0;
        int ju=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]<30)
            {
                mi+=10;
                ju+=15;
            }
            else
            {
                k=a[j]/30;
                mi+=k*10+10;
                k=a[j]/60;
                ju+=k*15+15;
            }
        }
        if(mi<ju)
        printf("Case %d: Mile %d\n",i,mi);
        else if(ju<mi)
        printf("Case %d: Juice %d\n",i,ju);
        else if(mi==ju)
        printf("Case %d: Mile Juice %d\n",i,mi);
    }
    return 0;
}
