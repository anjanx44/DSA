#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,a[8],m,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        m=0;
        for(j=0;j<7;j++)
        scanf("%d",&a[j]);
        m=min(min(a[4],a[5]),a[6]);
        /*m=a[4];
        for(j=5;j<7;j++)
        {
            if(a[j]<m)
            m=a[j];
        }*/
        //printf("min= %d\n",m);
        m=(a[4]+a[5]+a[6])-m;
        m=m/2;
        m=a[0]+a[1]+a[2]+a[3]+m;
        //printf("%d\n",m);
        if(m>=90)
        printf("Case %d: A\n",i);
        else if(m>=80&&m<90)
        printf("Case %d: B\n",i);
        else if(m>=70&&m<80)
        printf("Case %d: C\n",i);
        else if(m>=60&&m<70)
        printf("Case %d: D\n",i);
        else if(m<60)
        printf("Case %d: F\n",i);
    }
    return 0;
}
