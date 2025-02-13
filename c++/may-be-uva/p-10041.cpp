#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
    int n,t,a[505];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int sum=0;
        int p=n/2;
        for(int i=0;i<n;i++)
        {
            sum+=abs(a[i]-a[p]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
