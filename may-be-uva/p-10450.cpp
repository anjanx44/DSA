/*************************************
******** Team : BUBT_HIDDEN **********
**************************************
****** Shipu *** Anjan *** Asha ******
*************************************/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<deque>
#include<list>
#include<set>
#include<map>

using namespace std;

long long F(long long n);
long long dp[110];
int main(){
    long long t,n,cno=0;
    cin>>t;
    while(t--){
        memset(dp,-1,sizeof(dp));
        cin>>n;
        cout<<"Scenario #"<<++cno<<":"<<endl;
        cout<<F(n)<<endl<<endl;
    }
    return 0;
}

long long F(long long n){
    if(n==0) return 1;
    if(n==1) return 2;
    if(dp[n]!=-1) return dp[n];
    else{
        dp[n]=F(n-1)+F(n-2);
        return dp[n];
    }
}
