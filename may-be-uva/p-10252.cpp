#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<deque>
#include<list>
#include<stack>
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define FORR(i,n) for(int i=n-1;i>=0;i--)
#define FOR1(i,n) for(i=1;i<=(int)n;i++)
#define FOR1R(i,n) for(i=n;i>=1;i--)
#define PI 3.14159265358979323846264338327950

using namespace std;

int main(){
    string a,b,s;
    while(getline(cin,a)){
        getline(cin,b);
        s="";
        int l1=a.size();
        int l2=b.size();
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(a[i]==b[j]){
                    s+=a[i];
                    b[j]=1;
                    break;
                }
            }
        }
        sort(s.begin(),s.end());
//        cout<<s;
        int l=s.size();
        for(int i=0;i<l;i++){
            if(s[i]!=*" ")
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
