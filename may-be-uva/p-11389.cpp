#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<cstring>

using namespace std;

#define MAXLL 9223372036854775807
#define MINLL 9223372036854775808
#define MAXL 2147483647
#define MINL 2147483648
#define LL long long
//#define MAXP 1000000
//#define MAX 100000
#define pb push_back

int main(){
    int n,d,r,a[110],sumt,res,b[110];
//    vector <int> b(110);
    while(cin>>n>>d>>r){
        if(n==0&&d==0&&r==0) break;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(&a[0],&a[n]);
        sort(&b[0],&b[n]);
//        for(int i=0;i<n;i++){
//         cout<<a[i]<<" "<<b[i]<<'\n';
//        }
        res=0;
        for(int i=0;i<n;i++){
            sumt=a[i]+b[n-1-i];
            if(sumt>d){
                res+=sumt-d;
            }
        }
        cout<<res*r<<'\n';
//        b.clear();
    }
    return 0;
}
