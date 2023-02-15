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
#include<assert.h>
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

#define mx 200000
////MAIN CODE HERE




struct node{
    int u,v,cost;
    node(int a,int b,int c){
        u=a,v=b,cost=c;
    }
};

bool cmp(node a,node b){
    return a.cost<b.cost;
}

int par[mx+5];

int Find(int x){
    if(par[x]==x) return x;
    return par[x]=Find(par[x]);
}
void Union(int a,int b){
    int u=Find(a);
    int v=Find(b);
    if(u!=v){
        par[u]=v;
    }
}


int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)==2){
        if(n==0 && m==0) break;
        vector<node> arr;
        int total_cost=0;
        for(int i=0;i<m;i++){
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);
            arr.pb(node(a,b,c));
            total_cost+=c;
        }

        sort(all(arr),cmp);

        for(int i=0;i<n;i++){
            par[i]=i;
        }

        int ans=0;
        for(int i=0;i<m;i++){
            int x=Find(arr[i].u);
            int y=Find(arr[i].v);
            if(x!=y){
                Union(x,y);
                ans+=arr[i].cost;
            }
        }
        printf("%d\n",total_cost-ans);

    }
    return 0;
}






























