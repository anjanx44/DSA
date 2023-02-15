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
    double a,n,r,si;
    while(scanf("%d %d",&r,&n)==2)
    {
        a=(n*r*r*(sin(si)))/2;
        printf("%lf\n",a);
    }
    return 0;
}
