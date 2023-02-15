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

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)

#define ff first
#define se second
#define inf (1<<30)                                              //infinity value
#define pb push_back
#define mod  1000000007
#define ST(v) sort(v.begin(),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define un(v) ST(v), v.erase(unique(v.begin(),v.end()),v.end())

using namespace std;

int main(){
    string s;
    int t=0;
    while(getline(cin,s)){
        if(t!=0) pf("\n");
        t=1;
        map<int,int> mp;
        pair<int,int> pr[1010];
        int ss=s.size();
        for(int i=0;i<ss;i++){
            mp[s[i]]++;
        }
        map<int,int>::iterator it;
        int i=0;
        for(it=mp.begin();it!=mp.end();it++){
            pr[i].ff=it->se;
            pr[i].se=it->ff;
            i++;
        }
        sort(pr,pr+i);
        int f=0,x;
        for(int j=0;j<i;j++){
            if(pr[j].ff==pr[j+1].ff&&f==0){
                f=1;
                x=j;
                continue;
            }
            else if(pr[j].ff==pr[j+1].ff) continue;
            else if(pr[j].ff!=pr[j+1].ff&&f==1){
                for(int m=j;m>=x;m--){
                    printf("%d %d\n",pr[m].se,pr[m].ff);
                }
                f=0;
                continue;
            }
            printf("%d %d\n",pr[j].se,pr[j].ff);
        }
    }
    return 0;
}
