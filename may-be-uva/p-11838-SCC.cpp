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
#define forstl(i,s) for(__typeof((s).end()) i=(s).begin(); i != (s).end(); i++)

#define ff first
#define se second
#define mkp make_pair
#define pb push_back
#define sz(a) ((int)a.size())
#define ms(a,n) memset(a, n, sizeof(a))
#define ms0(a) ms(a,0)
#define all(a) a.begin(), a.end()
#define Abs(x) (((x)<0)?-(x):(x))

#define pi 2*acos(0.0)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

#define dbg(x) cout<<#x<<'='<<x<<endl;
#define dbgarr(i,a) cout<<#a<<"["<<i<<"] = "<<a[i]<<" "<<endl;
#define IOS ios_base::sync_with_stdio(0);
//typedef
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pair<int,int>,int > piii;
// Number theory
ll big_mod(ll b,ll p,ll m) {ll res=1;while(p){if(p & 1){res=((res%m)*(b%m))%m;}b=((b%m)*(b%m))%m;p>>=1;}return res;}
ll Pow(ll b,ll p) {ll res=1;while(p){if(p & 1){res=res*b;}b=b*b;p>>=1;}return res;}
ll modinv(ll n,ll m){return big_mod(n,m-2,m);}

////MAIN CODE HERE
int n,m;
vector<int> list[2000+5],revlist[2000+5];
vector<int> topoorder;
bool vis[2000+5];

void toposort(int u){
    vis[u]=1;
    int v,l=sz(list[u]);

    for(int i=0;i<l;i++){
        v=list[u][i];
        if(vis[v]==0){
            toposort(v);
        }
    }
    topoorder.pb(u);
}

void dfs(int u){
    vis[u]=1;
    int v,l=sz(revlist[u]);

    for(int i=0;i<l;i++){
        v=revlist[u][i];
        if(vis[v]==0){
            dfs(v);
        }
    }
}


int main(){
    while(scanf("%d %d",&n,&m)==2){
        if(!n && !m) break;
        for(int i=1;i<=n;i++){
            list[i].clear();
            revlist[i].clear();
        }
        for(int i=0;i<m;i++){
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            if(c==1){
                list[a].pb(b);
                revlist[b].pb(a);
            }
            else{
                list[a].pb(b);
                list[b].pb(a);
                revlist[a].pb(b);
                revlist[b].pb(a);
            }
        }

        topoorder.clear();
        ms0(vis);
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                toposort(i);
            }
        }
        reverse(all(topoorder));

        ms0(vis);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(vis[topoorder[i]]==0){
                dfs(topoorder[i]);
                cnt++;
            }
        }

        if(cnt==1){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}












