#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
    int n,a,b,sum;
    priority_queue <int> pq;
    while(scanf("%d",&n)==1)
    {
        sum=0;
        if(n==0) break;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            pq.push((-a));
        }
//        a=pq.top();
//        printf("a= %d\n",a);
//        int c=0;
        while(!pq.empty())
        {
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            sum+=-(a+b);
            if(pq.empty()==1) break;
            pq.push(a+b);
//            c++;
        }
//        printf("%d\n",c);
        printf("%d\n",sum);
    }
    return 0;
}
