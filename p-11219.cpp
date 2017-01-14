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
    int t,d,m,y,d1,m1,y1,cno=0;
    cin>>t;
    while(t--){
        scanf("%d/%d/%d",&d,&m,&y);
        scanf("%d/%d/%d",&d1,&m1,&y1);
        if(d1>d){
            m1++;
        }
        if(m1>m){
            y1++;
        }

        int age=y-y1;
        if(age<0){
            printf("Case #%d: Invalid birth date\n",++cno);
        }
        else if(age>130){
            printf("Case #%d: Check birth date\n",++cno);
        }
        else{
            printf("Case #%d: %d\n",++cno,age);
        }

    }
    return 0;
}
