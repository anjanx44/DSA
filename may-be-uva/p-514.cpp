#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

#define MAXLL 9223372036854775807
#define MINLL 9223372036854775808
#define MAXL 2147483647
#define MINL 2147483648
#define LL long long
//#define MAXP 100000
//#define MAX 100000
#define pb push_back

int main(){
    int n;
    while(scanf("%d",&n)==1){
        if(n==0) break;
        else{
            while(1){
                int na,a[1120];
                vector<int> v;
                stack<int> st;
                for(int i=0;i<n;i++){
                    scanf("%d",&na);
                    if(na==0) break;
                    v.push_back(na);
                }
                for(int i=1;i<=n;i++){
                    a[i-1]=i;
                }
                if(na==0){
                    printf("\n");
                    break;
                }
                st.push(a[0]);
                int i=1,j=0;
                while(!st.empty()){
                    if(st.top()==v[j]){
//                        int p=st.top();
//                        cout<<p<<'\n';
//                        cout<<v[j]<<'\n';
//                        cout<<"top="<<st.top()<<'\n';
                        st.pop();
//                        if(i==n) break;
                        if(st.empty()){
                            if(j==n-1) break;
                            st.push(a[i]);
                            i++;
                        }
                        j++;
                    }
                    else{
                        st.push(a[i]);
                        printf("a=%d\n",a[i]);
//                        printf("anjan\n");
                        i++;
//                        if(i==n-1) break;
//                        printf("i=%d\n",i);
                    }
                    if(i==n+1) break;

                }
                if(st.empty()){
                    printf("Yes\n");
                }
                else{
                    printf("No\n");
                }


            }
        }
    }
    return 0;
}
