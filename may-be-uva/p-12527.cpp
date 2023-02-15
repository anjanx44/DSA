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
#define sort(v) sort(v.begin(),v.end())
#define un(v) sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define cover(a,d) memset(a,d,sizeof(a))

using namespace std;

int main(){
    int n,m,a[15];
    while(scanf("%d %d",&n ,&m)==2){
            if(n>m) swap(n,m);
            int cnt=0;
        for(int i=n;i<=m;i++){
            int p=i;
            int j=0;
            while(p!=0){
                a[j]=p%10;
                p/=10;
                j++;
            }
            int f=0;
            for(int k=0;k<j;k++){
                for(int l=k+1;l<j;l++){
                    if(a[k]==a[l]){
                        f=1;
                        break;
                    }
                }
                if(f==1) break;
            }
            if(f==0) cnt++;
        }
        printf("%d\n",cnt);
    }
}
