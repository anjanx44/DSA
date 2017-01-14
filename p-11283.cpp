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

char g[5][5];
char s[20];
int len;
bool vis[5][5];
int dx[]={0,0,1,-1,1,-1,-1,1};
int dy[]={1,-1,0,0,1,-1,1,-1};


bool dfs(int i,int j,int pos){
    if(pos==len) return 1;
    bool b=0;

    vis[i][j]=1;
    for(int k=0;k<8;k++){
        int x=i+dx[k];
        int y=j+dy[k];

        if(x>=0 && x<4 && y>=0 && y<4 && vis[x][y]==0 && g[x][y]==s[pos]){
           b|=dfs(x,y,pos+1);
        }
    }
    vis[i][j]=0;
    return b;
}


int main(){
    int t,cno=0;
    scanf("%d",&t);
    while(t--){
        for(int i=0;i<4;i++){
            scanf("%s",g[i]);
        }
        int m;

        scanf("%d",&m);

        int sum=0;
        for(int mi=0;mi<m;mi++){
            scanf("%s",s);
            len=strlen(s);
            bool b=0;
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(s[0]==g[i][j]){
                        ms0(vis);
                        b|=dfs(i,j,1);
                    }
                }
            }
            if(b){
                if(len==3||len==4) sum+=1;
                else if(len==5) sum+=2;
                else if(len==6) sum+=3;
                else if(len==7) sum+=5;
                else sum+=11;
//                dbg(sum)
            }
        }
        printf("Score for Boggle game #%d: %d\n",++cno,sum);

    }
    return 0;
}








