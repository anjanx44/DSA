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

//LL big_mod(LL b,LL p,LL m);
LL big_mod(LL b,LL p,LL m){
    if(p==0) return 1;
    if(p==1) return b;
    else if(p&1) return ((b%m)*big_mod(b,p-1,m)%m)%m;
    else{
        LL c=big_mod(b,p/2,m)%m;
        return ((c%m)*(c%m))%m;
    }
}

int main(){
    LL b,p,m;
    while(cin>>b>>p>>m){
        LL res=big_mod(b,p,m);
        cout<<res<<'\n';
    }
    return 0;
}
