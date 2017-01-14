/*************************************
******** Team : BUBT_HIDDEN **********
**************************************
****** Shipu *** Anjan *** Asha ******
*************************************/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<deque>
#include<list>
#include<set>
#include<map>

using namespace std;

int main(){
    int t,n,q,a[100010],qi;

    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        sort(a,a+n);
        int max;
        for(int i=0;i<q;i++){
            scanf("%d",&qi);
            max=0;
            for(int j=n-1;j>=0;j--){
                max=qi&a[j];
                if(max!=0){
                    max=qi&a[j];
                    break;
                }
            }
            printf("%d\n",max);
        }
    }
    return 0;
}
