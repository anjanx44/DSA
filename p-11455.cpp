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
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(a==b&&b==c&&d==a){
            cout<<"square"<<'\n';
        }
        else if((a==b&&c==d)||(a==c&&b==d)||(a==d&&c==b)){
            cout<<"rectangle"<<'\n';
        }
        else if((a<=(b+c+d))&&b<=(a+c+d)&&c<=(a+b+d)&&d<=(a+b+c)){
            cout<<"quadrangle"<<'\n';

        }
        else{
            cout<<"banana"<<'\n';
        }
    }
    return 0;
}
