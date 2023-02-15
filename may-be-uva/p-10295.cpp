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

int main(){
    string s,p;
    int m,n,k;
    while(cin>>m>>n){
        map<string,int> mp;
        for(int i=0;i<m;i++){
            cin>>s>>k;
            mp[s]=k;
        }
        for(int i=0;i<n;i++){
            int sum=0;
            while(cin>>p){
                if(p==".") break;
                sum+=mp[p];
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
