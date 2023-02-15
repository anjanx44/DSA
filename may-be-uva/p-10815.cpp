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
    string s,sa;
    set<string> ss;
//    int j=0;
    while(cin>>s){
            getchar();
//        j++;
        int l=s.size();
        sa="";
        for(int i=0;i<=l;i++){
            if(isalpha(s[i])){
                if(s[i]>='A'&&s[i]<='Z'){
                    sa+=s[i]+32;
                }
                else{
                    sa+=s[i];
                }
            }
            else{
                if(sa[0]!='\0'){
                    ss.insert(sa);
                    sa="";
                }
            }
        }
//        if(j==1) break;
    }
    set<string>::iterator t;
    for(t=ss.begin();t!=ss.end();t++){
        cout<<*t<<endl;
    }
    return 0;
}
