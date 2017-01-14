#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <memory.h>
#include <functional>

using namespace std;



int main(){
    int t,no=0;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long pos;

        unsigned long long res;

        for(long long i=0;i<10000000000;i++){
            res=(long long)(3*(i*i))+(2*i)+7;

//            printf("i=%d\n",i);
//            printf("res=%lld\n",res);

            if(res>=n){
              pos=i;
              break;
            }
        }


        cout<<"Case "<<++no<<":"<<" "<<pos<<endl;


    }
    return 0;
}
