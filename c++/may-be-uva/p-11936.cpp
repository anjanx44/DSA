#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int n,a,b,c;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&a,&b,&c);
        if(((a+b)>c)&&((a+c)>b)&&((b+c)>a)){
            printf("OK\n");
        }
        else{
            printf("Wrong!!\n");
        }
    }
    return 0;
}
