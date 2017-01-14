//#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <memory.h>
#include <functional>
#include <numeric>
#include<time.h>
using namespace std;


//For Define
#define forab(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define for0(i,n) forab(i,0,(n)-1)
#define for1(i,n) forab(i,1,n)
#define forstl(i,s) for(__typeof((s).end()) i=(s).begin(); i != (s).end(); i++)

#define ff first
#define se second
#define mkp make_pair
#define pb push_back
#define ms(a,n) memset(a, n, sizeof(a))
#define ms0(a) ms(a,0)
#define all(a) a.begin(), a.end()
#define Abs(x) (((x)<0)?-(x):(x))

#define pi 2*acos(0.0)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

#define dbg(x) cout<<#x<<'='<<x<<endl;
#define dbgarr(i,a) cout<<#a<<"["<<i<<"] = "<<a[i]<<" "<<endl;
#define mx7 10000007
#define mx6 1000006
#define mx5 100005
#define IOS ios_base::sync_with_stdio(0);
//typedef
typedef long long ll;
typedef pair<int,int> pii;
// Number theory
ll big_mod(ll b,ll p,ll m) {ll res=1;while(p){if(p & 1){res=((res%m)*(b%m))%m;}b=((b%m)*(b%m))%m;p>>=1;}return res;}
ll Pow(ll b,ll p) {ll res=1;while(p){if(p & 1){res=res*b;}b=b*b;p>>=1;}return res;}
ll modinv(ll n,ll m){return big_mod(n,m-2,m);}

////CODE HERE
int edge;
int start,ttl;
map<int,int> mp;
vector<int> adj[10001];
bool vis[1110];

void bfs(pii u){
    vis[u.ff]=1;
    queue<pii> q;
    q.push(u);
    while(!q.empty()){
        u=q.front(),q.pop();
        pii v;
        int l=adj[u.ff].size();

        for(int i=0;i<l;i++){
            v.ff=adj[u.ff][i];
            v.se=u.se+1;
            if(v.se<=ttl && vis[v.ff]==0){
                vis[v.ff]=1;
                q.push(v);
            }
        }
    }
}


int main(){
    int node,cno=0;
    while(scanf("%d",&edge)==1 && edge){
        node=1;
        for(int i=0;i<50;i++){
           adj[i].clear();
        }
        mp.clear();


        for(int i=0;i<edge;i++){
            int x,y;
            scanf("%d %d",&x,&y);
            if(mp[x]==0) mp[x]=node++;
            if(mp[y]==0) mp[y]=node++;
            adj[mp[x]].pb(mp[y]);
            adj[mp[y]].pb(mp[x]);
        }

        while(scanf("%d %d",&start,&ttl)==2){
            if(start==0 && ttl==0) break;
            ms0(vis);
            bfs(mkp(mp[start],0));

            int cnt=0;
            for(int j=1;j<=node;j++){
                if(vis[j]==0) cnt++;
            }

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++cno,cnt-1,start,ttl);

        }
    }
    return 0;
}


























