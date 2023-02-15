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
map<string,int> msi;
map<int,string> mis;

vector<int> list[110],ans;
int ind[110];

int main(){
    int cno=0;
    while(cin>>n){

        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            msi[s]=i;
            mis[i]=s;
        }
        cin>>m;
        string s1,s2;
        memset(ind,0,sizeof(ind));
        for(int i=0;i<m;i++){
            cin>>s1>>s2;
            int a=msi[s1];
            int b=msi[s2];
            list[a].pb(b);
            ind[b]++;
        }

        int i=0;
        while(i!=n){
            int j;
            for(j=0;j<n;j++){
                if(ind[j]==0) break;
            }

            ans.pb(j);
            i++;
            ind[j]--;

            int l=list[j].size();

            for(int k=0;k<l;k++){
                ind[list[j][k]]--;
            }
        }

        printf("Case #%d: Dilbert should drink beverages in this order: ",++cno);

        for(int k=0;k<n;k++){
            if(k!=0) cout<<" ";

            cout<<mis[ans[k]];
        }
        printf(".\n\n");

        ans.clear();
        msi.clear();
        mis.clear();

        for(int k=0;k<n;k++){
            list[k].clear();
        }
    }
    return 0;
}
































