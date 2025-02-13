#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<cstring>
#include<queue>
#include<map>

using namespace std;

#define debug(x) cout<<#x<<'='<<x<<endl;
#define MAXLL 9223372036854775807
#define MINLL 9223372036854775808
#define MAXL 2147483647
#define MINL 2147483648
#define LL long long
#define max6 1000001
#define max5 100001
#define pb push_back

//bool prime[max5+5];
//void sieve(void);

int main(){
    int t;
    char c[610];
    scanf("%d",&t);
    while(t--){
        map<char,int> mp;
        mp['M']=0;
        mp['A']=0;
        mp['R']=0;
        mp['G']=0;
        mp['I']=0;
        mp['T']=0;
        scanf("%s",c);
        int l=strlen(c);
        for(int i=0;i<l;i++){
            if(c[i]=='M'||c[i]=='A'||c[i]=='R'||c[i]=='G'||c[i]=='I'||c[i]=='T'){
                mp[c[i]]++;
            }
        }
        map<char,int> :: iterator it;

        for(it=mp.begin();it!=mp.end();++it){
            if(it->first=='A') mp['A']/=3;
            if(it->first=='R') mp['R']/=2;
        }
        it=mp.begin();
        int m=it->second;
        for(it=mp.begin();it!=mp.end();++it){
            if(it->second<m) m=it->second;
        }
        printf("%d\n",m);
    }
    return 0;
}
