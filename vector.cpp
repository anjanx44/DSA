#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector <int> a[1001];
    int t,u,v,node,edge;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",node,edge);
        for(int j=0;j<edge;j++)
        {
            scanf("%d%d",&u,&v);
            a[u].push_back(v);
            a[v].push_back(u);
            printf("a[%d]=%d\n",u,a[u]);
            printf("a[%d]=%d\n",v,a[v]);
        }
        for(i=0;i<node;i++)
        a[i].clear();
    }
    return 0;
}
