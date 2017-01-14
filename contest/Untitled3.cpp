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

int main(){
    int t;
    scanf("%d",&t);
    getchar();
    int i=0;
    while(t--){
            if(i)
            getchar();
            i++;
        char c;
        int a,b;
        scanf("%c %d %d",&c,&a,&b);

//        printf("%c %d %d aaaa",c,a,b);;
        if(c=='k'){
            printf("%d\n",(a*b+1)/2);
        }
        else if(c=='K'){
            printf("%d\n",((a+1)/2) * ((b+1)/2));
        }
        else if(c=='r'||c=='Q'){
            printf("%d\n",min(a,b));
        }
    }
    return 0;
}
