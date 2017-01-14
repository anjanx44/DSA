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

struct node{
    int x,y,dir,col,sec;
};
bool vis[30][30][8][8];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int m,n,sx,sy,tx,ty,cnt=0;
char g[30][30];

int bfs(int x,int y,int dr,int cl,int cnt){
    vis[x][y][dr][cl]=1;
    node v,u;
    u.x=x,u.y=y,u.dir=dr,u.col=cl,u.sec=cnt;
    queue<node> q;
    q.push(u);
    while(!q.empty()){
        u=q.front(),q.pop();
        v.x=u.x+dx[u.dir];
        v.y=u.y+dy[u.dir];
        v.dir=u.dir;
        v.col=(u.col+1)%5;

        if((v.x>=0 && v.x<m) && (v.y>=0 && v.y<n) && (vis[v.x][v.y][v.dir][v.col]==0) && ((g[v.x][v.y]=='.') || (g[v.x][v.y]=='S') || (g[v.x][v.y]=='T'))){
            vis[v.x][v.y][v.dir][v.col]=1;
            v.sec=u.sec+1;

////            if(v.x==)
//
//                            dbg(v.x);
//                            dbg(v.y);
//                            dbg(v.col);
//                            dbg(v.dir);
//                            dbg(v.sec);
            if(g[v.x][v.y]=='T' && v.col==0){
                return v.sec;
            }
            q.push(v);
        }
        for(int i=-1;i<=1;i+=2){
            v.x=u.x;
            v.y=u.y;
            v.col=u.col;
            v.dir=(((u.dir+i)%4)+4)%4;
//            dbg(u.dir);
//            dbg(v.dir);

            if((vis[v.x][v.y][v.dir][v.col]==0)){
                vis[v.x][v.y][v.dir][v.col]=1;
                v.sec=u.sec+1;
//                dbg("anjan");
//                            dbg(v.x);
//                            dbg(v.y);
//                            dbg(v.col);
//                            dbg(v.dir);
//                            dbg(v.sec);

                q.push(v);
            }
        }
    }
    return 0;
}

int main(){
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int cno=0,nl=0;
    while(scanf("%d %d",&m,&n)==2){
        if(m==0&&n==0) break;
        if(nl>0) printf("\n");
        nl++;
        for(int i=0;i<m;i++){
            scanf("%s",g[i]);
            for(int j=0;j<n;j++){
                if(g[i][j]=='S') sx=i,sy=j;
                if(g[i][j]=='T') tx=i,ty=j;
            }
        }
//        dbg(sx);
//        dbg(sy);
//        dbg(tx);
//        dbg(ty);
        ms0(vis);
        printf("Case #%d\n",++cno);
        int res=bfs(sx,sy,0,0,0);
        if(res){
            printf("minimum time = %d sec\n",res);
        }
        else{
            printf("destination not reachable\n");
        }
    }
    return 0;
}





















