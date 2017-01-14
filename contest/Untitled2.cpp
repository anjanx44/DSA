#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int m,n;
char g[110][110];
bool vis[110][110];
int dx[]={1,-1,0,0,1,-1,-1,1};
int dy[]={0,0,1,-1,1,-1,1,-1};



void bfs(pair<int,int> u){
    vis[u.first][u.second]=1;

    queue<pair<int,int> > q;

    q.push(u);

    while(!q.empty()){
        u=q.front(),q.pop();
        pair<int ,int > v;

        for(int i=0;i<8;i++){
            v.first=u.first+dx[i];
            v.second=u.second+dy[i];

            if((v.first>=0 && v.first<m) && (v.second>=0 && v.second<n) && (g[v.first][v.second]=='@') && (vis[v.first][v.second]==0)){
                vis[v.first][v.second]=1;
                q.push(make_pair(v.first,v.second));

            }
        }
    }

}

int main(){
    while(scanf("%d %d",&m,&n)==2){
        if(m==0) break;
        for(int i=0;i<m;i++){
            scanf("%s",g[i]);
        }

        int cnt=0;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(g[i][j]=='@' && vis[i][j]==0){
                    cnt++;
                    bfs(make_pair(i,j));
                }
            }
        }

        printf("%d\n",cnt);
    }
    return 0;
}

















