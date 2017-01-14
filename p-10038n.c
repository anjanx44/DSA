#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,p,c,b[3010],a[3010],i;
    while(scanf("%d",&n)==1)
    {
        p=n-1;
        c=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            b[i]=abs(a[i+1]-a[i]);
        }
        sort(b,b+i);
        for(i=1;i<n;i++)
        {
            if(a[0]==a[i])
            c=0;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>p)
            c=0;
        }
        if(c==0)
        printf("Not jolly");
        else
        printf("Jolly");
    }
    return 0;
}
