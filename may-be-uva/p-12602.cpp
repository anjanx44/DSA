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
    int n;
    scanf("%d",&n);
    while(n--){
        string s,ss="";
        int k;
        cin>>s;
        int i=0;
        while(s[i]!=*"-"){
            ss+=s[i];
            i++;
        }
        int sl=s.size();
        k=0;
//        cout<<i<<endl;
        for(int j=i+1;j<sl;j++){
            k=k*10+(s[j]-'0');
        }
        int sum=0;
        sum+=(ss[0]-65)*(26*26)+(ss[1]-65)*26+(ss[2]-65);
//        cout<<sum<<k<<endl;
        if(abs(sum-k)<=100)
            pf("nice\n");
        else
            pf("not nice\n");
    }
    return 0;
}
