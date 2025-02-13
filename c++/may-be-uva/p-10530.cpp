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
    int n,k;
    string a;
    priority_queue <int> p;
    priority_queue <int> q;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        getchar();
        getline(cin,a);
        while(1)
        {
            if(a=="too high")
            p.push(-n);
            else if(a=="too low")
            q.push(n);
            else
            {
                k=n;
                if(p.size()==0&&q.size()==0)
                {
                    printf("Stan may be honest\n");
                    break;
                }
                else if(p.size()==0)
                {
                    if(k>q.top())
                    printf("Stan may be honest\n");
                    else
                    printf("Stan is dishonest\n");
                    break;
                }
                else if(q.size()==0)
                {
                    if(k<-(p.top()))
                    printf("Stan may be honest\n");
                    else
                    printf("Stan is dishonest\n");
                }
                break;
            }
            cin>>n;
            getchar();
            getline(cin,a);
        }
        if(p.size()!=0&&q.size()!=0)
        {
            if(k<-(p.top())&&k>q.top())
            printf("Stan may be honest\n");
            else
            printf("Stan is dishonest\n");
        }
        while (!p.empty())
        {
            p.pop();
        }
        while (!q.empty())
        {
            q.pop();
        }
    }
    return 0;
}
