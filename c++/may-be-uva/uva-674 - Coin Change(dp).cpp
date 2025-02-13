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
#include <iomanip>
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
typedef pair<int,pair<int,int> > piii;
// Number theory
ll big_mod(ll b,ll p,ll m) {ll res=1;while(p){if(p & 1){res=((res%m)*(b%m))%m;}b=((b%m)*(b%m))%m;p>>=1;}return res;}
ll Pow(ll b,ll p) {ll res=1;while(p){if(p & 1){res=res*b;}b=b*b;p>>=1;}return res;}
ll modinv(ll n,ll m){return big_mod(n,m-2,m);}


//MAIN CODE HERE


int coin[]={50,25,10,5,1},make; 

int dp[6][7489+5];

int call(int i,int amount){
	if(i>=5){
		if(amount==0) return 1;
		else return 0;
	}
	
	if(dp[i][amount]!=-1){
		return dp[i][amount];
	}
	
	int ret1=0,ret2=0;
	
	if(amount-coin[i]>=0){
		ret1=call(i,amount-coin[i]);
		//~ dbg(coin[i])
	}
	
	ret2=call(i+1,amount);
	
	
	return dp[i][amount]= ret1+ret2;
}

int main(){
	ms(dp,-1);
	while(scanf("%d",&make)==1){
		int res=call(0,make);
		
		printf("%d\n",res);
		
	}
	return 0;
}
























