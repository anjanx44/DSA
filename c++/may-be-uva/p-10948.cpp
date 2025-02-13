
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

using namespace std;


//For Define
#define forab(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define for0(i,n) forab(i,0,(n)-1)
#define for1(i,n) forab(i,1,n)
#define rforba(i,b,a) for(__typeof(b) i=(b);i>=(a);i--)
#define rfor0(i,n) rforba(i,(n)-1,0)
#define rfor1(i,n) rforba(i,n,1)
#define forstl(i,s) for(__typeof((s).end()) i=(s).begin(); i != (s).end(); i++)

#define pb push_back
#define sz(a) ((int)a.size())
#define ms(a,n) memset(a, n, sizeof(a))
#define ms0(a) ms(a,0)
#define all(a) a.begin(), a.end()
#define sorts(a) sort(all(a))
#define sorta(a,n) sort(a,a+n)
#define sqr(a) ((a)*(a))
#define amax(a,b) ( (a) = max( (a) , (b) ) )
#define amin(a,b) ( (a) = min( (a) , (b) ) )
#define mp make_pair
#define abs(x) (((x)<0)?-(x):(x))
//#define lb(v,s) std::lower_bound (v.begin(), v.end(), s);
//#define ub(v,s) std::upper_bound (v.begin(), v.end(), s);


#define ff first
#define se second
//#define pi 2*acos(0.0)
#define pi 3.14159265358979
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define popcount(i) __builtin_popcount(i)                         //count one
#define parity(i)   __builtin_parity(i)       //evenparity 0 and odd parity 1
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

//input
#define sfi(t) scanf("%d",&t)
#define sfii(a,b) scanf("%d %d",&a,&b)
#define sfiii(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sfll(t) scanf("%lld",&t)
#define sfllll(a,b) scanf("%lld %lld",&a,&b)
#define sfllllll(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define sfd(t) scanf("%lf",&t)
#define sfc(c) scanf("%c",&c)
#define sfs(s) scanf("%s",s)


//Output
#define pfi(a) printf("%d\n",a)
#define pfii(a,b) printf("%d %d\n",a,b)
#define pfiii(a,b,c) printf("%d %d %d\n",a,b,c)
#define pfll(a) printf("%lld\n",a)
#define pfllll(a,b) printf("%lld %lld\n",a,b)
#define pfllllll(a,b,c) printf("%lld %lld %lld\n",a,b,c)
#define pfd(a) printf("%lf\n",a)
#define pfs(a) printf("%s\n",a)
#define pfis(a) printf("%d ",a)
#define pflls(a) printf("%lld ",a)
#define pfds(a) printf("%lf ",a)


typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;
typedef pair<ll,ll> pllll;
typedef pair<string,int> psi;
typedef vector<pii> vii;
typedef set<int> si;
typedef set<string> ss;
typedef map<int,int> mii;
typedef map<string,int> msi;

ll big_mod(ll b,ll p,ll m) {ll res=1;while(p){if(p & 1){res=((res%m)*(b%m))%m;}b=((b%m)*(b%m))%m;p>>=1;}return res;}
ll POW(ll b,ll p) {ll res=1;while(p){if(p & 1){res=(res*b);}b=b*b;p>>=1;}return res;}
ll modinv(ll n,ll m){return big_mod(n,m-2,m);}

#define dbg(x) cout<<#x<<'='<<x<<endl;
#define dbgarr(i,a) cout<<#a<<"["<<i<<"] = "<<a[i]<<" "<<endl;
#define MAXLL 9223372036854775807
#define MINLL -9223372036854775808
#define MAXL 2147483647
#define MINL -2147483648
#define mx7 10000007
#define mx6 1000006
#define mx5 100005
#define mx 715
//double beg=clock();
//double end=clock();
//    fprintf(stderr,"*** Total time = %.3lf ***\n",(end-beg)/CLOCKS_PER_SEC);
////CODE HERE
//신

bool cp[mx6+5];

void sieve(void){
    cp[0]=cp[1]=1;
    for(ll i=4;i<mx6;i+=2){
        cp[i]=1;
    }

    ll sq=sqrt(mx6)+2;
    for(ll i=3;i<sq;i+=2){
        if(cp[i]==0){
            ll k=i<<1;
            for(ll j=i*i;j<mx6;j+=k){
                cp[j]=1;
            }
        }

    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    //easy problem
    sieve();
    int n;
    while(cin>>n){
        if(n==0) break;
        if(cp[n-2]==0){
            cout<<n<<":"<<endl;
            cout<<"2+"<<n-2<<endl;
            continue;
        }
        bool b=0;
        int i;
        for(i=3;i<=n-2;i+=2){
            if(cp[i]==0 && cp[n-i]==0){
                b=1;
                break;
            }
        }

        if(b){
            cout<<n<<":"<<endl;
            cout<<i<<"+"<<n-i<<endl;
        }
        else{
            cout<<n<<":"<<endl;
            cout<<"NO WAY!"<<endl;
        }

    }
    return 0;
}























