#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,a[20005];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n);
        long long sum=0;
        for(int i=n-3;i>=0;i-=3)
        {
            sum+=a[i];
        }
        printf("%lld\n",sum);
    }
    return 0;
}
