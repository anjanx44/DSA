#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,a[25],d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n);
        d=(a[n-1]-a[0])*2;
        printf("%d\n",d);
    }
    return 0;
}
