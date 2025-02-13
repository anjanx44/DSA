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

#define ll unsigned long long
using namespace std;

int main(){
    ll a,b,t,no=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<"Case "<<++no<<": "<<min(a,b)<<endl;
    }
    return 0;
}


















