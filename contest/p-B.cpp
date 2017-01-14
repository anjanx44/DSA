#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int cnt;

void rec(int i){
    if(i==1) return ;
    if(i&1){
        rec(3*i+1);
    }
    else{
        rec(i/2);
    }
    cnt++;
//    printf("%d aa\n",i);
}

int main(){
    int a,b;
    while(cin>>a>>b){
        bool f=1;
        if(a>b){
          swap(a,b);
          f=0;
        }

        int mx=0,num;
        for(int i=a;i<=b;i++){
            cnt=1;
            rec(i);
            if(cnt>=mx){
                mx=cnt;
                num=i;
            }
        }
        if(f)
        printf("%d %d %d\n",a,b,mx);
        else{
            printf("%d %d %d\n",b,a,mx);
        }
    }
    return 0;
}
