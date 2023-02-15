#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<bitset>
#include<string>
#include <sstream>
#include <fstream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define pi 2*acos(0.0)
using namespace std;

int colored[210];
queue<int>q;
void BFS(int start);
vector<int>adj[210];

int main()
{
int node,edge,i,u,v;
while(scanf("%d",&node)==1)
{
if(node==0) break;
scanf("%d",&edge);
memset(colored,-1,sizeof(colored));
for(i=0;i<edge;i++)
{
scanf("%d%d",&u,&v);
adj[u].push_back(v);
adj[v].push_back(u);
}
BFS(0);
for(i=0;i<node;i++)
adj[i].clear();
}
return 0;
}

void BFS(int start)
{
colored[start]=1;
int i;
q.push(start);
while(!q.empty())
{
int u=q.front();
q.pop();
for(i=0;i<adj[u].size();i++)
{
int v=adj[u][i];
if(colored[v]==-1)
{
if(colored[u]==0)
colored[v]=1;
else
colored[v]=0;
q.push(v);
}
else
{
if(colored[u]==0&&colored[v]==0)
{
printf("NOT BICOLORABLE.\n");
return;
}
else if(colored[u]==1&&colored[v]==1)
{
printf("NOT BICOLORABLE.\n");
return;
}
}
}
}
printf("BICOLORABLE.\n");
return;
}
