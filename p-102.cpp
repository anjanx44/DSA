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

int br[5],gr[5],cl[5];

int main(){
    while(scanf("%d%d%d",&br[0],&gr[0],&cl[0])==3){
        for(int i=1;i<3;i++){
            scanf("%d%d%d",&br[i],&gr[i],&cl[i]);
//            printf("%d %d %d\n",br[i],gr[i],cl[i]);
        }

        ll mn=(ll)1<<32;
        string s="";

        pair<int,string> pr[20];
        int pri=0;

        for(int bri=0;bri<3;bri++) {
            for(int gri=0;gri<3;gri++)if(bri!=gri){
                for(int cli=0;cli<3;cli++)if(bri!=cli || gri!=cli){
                    int sum=0;
                    s="";
                    for(int i=0;i<3;i++){
                        int cbr=gr[i]+cl[i];
                        int cgr=br[i]+cl[i];
                        int ccl=br[i]+gr[i];

                        if(i==bri){
                            sum+=cbr;
                            s+='B';
                        }
                        else if(i==gri){
                            sum+=cgr;
                            s+='G';
                        }
                        else{
                            sum+=ccl;
                            s+='C';
                        }
                    }
                    if(sum<=mn){
                        mn=sum;
                        pr[pri++]=mkp(sum,s);
                    }
                }
            }
        }
        sort(pr,pr+pri);

        cout<<pr[0].se<<" "<<pr[0].ff<<endl;

    }
    return 0;
}


































