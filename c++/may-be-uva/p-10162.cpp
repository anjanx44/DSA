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

////MAIN CODE HERE
int a1[]={1,4,7,6,5,6,3,6,9,0};
int a2[]={1,6,3,6,5,6,7,4,9,0};

int main(){
    string s;
    while(cin>>s){
        int l=sz(s);
        if(l==1){
            if(s[0]=='0') break;
            int kk=0;
            for(int i=0;i<s[0]-'0';i++){
                kk=(kk%10+a1[i]%10)%10;
            }
            printf("%d\n",kk);
            continue;
        }
//        else if(s[l-1]=='0'){
//            printf("%d\n",((s[l-2]-'0')%10 * 7%10)%10);
//
//        }
//        ins);
        int ans=((s[l-2]-'0')*7)%10;
        int sum=0;
        if((s[l-2]-'0')%2==0){
            for(int i=0;i<s[l-1]-'0';i++){
                sum=(sum%10+a1[i]%10)%10;
            }
        }
        else{
            for(int i=0;i<s[l-1]-'0';i++){
                sum=(sum%10+a2[i]%10)%10;
            }
        }
        ans+=sum;
        ans%=10;
        printf("%d\n",ans);
    }
    return 0;
}

























