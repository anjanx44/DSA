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

#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)

#define ft first
#define se second
#define r(input) freopen("input.txt","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define ST(v) sort(v.begin(),v.end())
#define un(v) ST(v), v.erase(unique(v.begin(),v.end()),v.end())
#define cover(a,d) memset(a,d,sizeof(a))

using namespace std;

int F(int i,int j);
int t,cno=0,dp[1005][1005];
string s;

int main(){
    scanf("%d",&t);
    getchar();
    while(t--){
        memset(dp,-1,sizeof(dp));
        getline(cin,s);
        if(s[0]=='\0'){
            printf("0\n");
            continue;
        }
        int l=s.size();
        int p=F(0,l-1);
        printf("%d\n",l-p);
    }
    return 0;
}

int F(int i,int j){
    if(dp[i][j]!=-1) return dp[i][j];
    if(i==j) return 0;
    else if(i>j) return 0;
    if(s[i]==s[j]) return dp[i][j]=F(i+1,j-1);
    else if(s[i]!=s[j]) return dp[i][j]=1+min(F(i+1,j),F(i,j-1));
}
