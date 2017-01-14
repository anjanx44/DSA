#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<cstring>
#include<queue>

using namespace std;

#define debug(x) cout<<#x<<'='<<x<<endl;
#define MAXLL 9223372036854775807
#define MINLL 9223372036854775808
#define MAXL 2147483647
#define MINL 2147483648
#define LL long long
//#define MAXP 1000000
//#define MAX 100000
#define pb push_back

int main(){
    char s,c=0;
    while(scanf("%c",&s)==1){
        if(s=='"'){
            c++;
            if(c&1){
                printf("``");
            }
            else{
                printf("''");
            }
        }
        else{
            printf("%c",s);
        }
    }
    return 0;
}
