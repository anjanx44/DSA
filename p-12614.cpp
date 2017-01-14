#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>

using namespace std;

#define MAXN 9223372036854775807
#define MINN 9223372036854775808

#define MAXP 1000000
#define MAX 100000

int main(){
    int t,cno=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,maxn=MINN;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a>maxn) maxn=a;
        }
        cout<<"Case"<<" "<<++cno<<":"<<" "<<maxn<<"\n";
    }
    return 0;
}
