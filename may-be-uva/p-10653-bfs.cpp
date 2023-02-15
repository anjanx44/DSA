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
typedef pair<pair<int,int>,int > piii;
// Number theory
ll big_mod(ll b,ll p,ll m) {ll res=1;while(p){if(p & 1){res=((res%m)*(b%m))%m;}b=((b%m)*(b%m))%m;p>>=1;}return res;}
ll Pow(ll b,ll p) {ll res=1;while(p){if(p & 1){res=res*b;}b=b*b;p>>=1;}return res;}
ll modinv(ll n,ll m){return big_mod(n,m-2,m);}

////MAIN CODE HERE
bool vis[1004][1004];
int x[]={1,-1,0,0};
int y[]={0,0,1,-1};
int r,c,sx,sy,dx,dy;

int bfs(piii u){
    vis[u.ff.ff][u.ff.se]=1;
    piii v;
    queue<piii> q;
    q.push(u);
    while(!q.empty()){
        u=q.front(),q.pop();
        for(int i=0;i<4;i++){
            v.ff.ff=u.ff.ff+x[i];
            v.ff.se=u.ff.se+y[i];
            v.se=u.se+1;

            if(v.ff.ff>=0 && v.ff.ff<r && v.ff.se>=0 && v.ff.se<c && vis[v.ff.ff][v.ff.se]==0){
                vis[v.ff.ff][v.ff.se]=1;
                q.push(v);
                if(v.ff.ff==dx && v.ff.se==dy){
                    return v.se;
                }
            }
        }
    }
}

int main(){
    while(scanf("%d %d",&r,&c)==2){
        if(r==0 && c==0) break;
        ms0(vis);

        int nrb;
        scanf("%d",&nrb);
        for(int i=0;i<nrb;i++){
            int rp,nb;
            scanf("%d %d",&rp,&nb);
            for(int j=0;j<nb;j++){
                int cp;
                scanf("%d",&cp);
                vis[rp][cp]=1;
            }
        }
        scanf("%d %d %d %d",&sx,&sy,&dx,&dy);
        printf("%d\n",bfs(mkp(mkp(sx,sy),0)));
    }
    return 0;
}

























