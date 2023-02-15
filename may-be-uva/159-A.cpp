#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<deque>
#include<list>
#include<stack>
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define FORR(i,n) for(int i=n-1;i>=0;i--)
#define FOR1(i,n) for(i=1;i<=(int)n;i++)
#define FOR1R(i,n) for(i=n;i>=1;i--)
#define PI 3.14159265358979323846264338327950
using namespace std;
int main()
{
    int n,m,k,a[60],i,sum;
    while(scanf("%d %d %d",&n,&m,&k)==3)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        sum=k;
        i=n-1;
        int p=0;
        while(1)
        {
            if(sum>=m||p==n) break;
            sum=(sum+a[i])-1;
            i--;
            p++;
        }
        if(sum<m)
            printf("-1\n");
        else
            printf("%d\n",p);
    }
    return 0;
}
