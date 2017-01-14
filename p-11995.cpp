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
#define max6 1000001
#define max5 100001
#define pb push_back

//bool prime[max5+5];
//void sieve(void);

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int a,b;
        queue<int> qu;
        stack<int> st;
        priority_queue<int> prq;
        bool q=true,s=true,pq=true;
        while(n--){
            scanf("%d %d",&a,&b);
            if(a==1){
                if(q)
                qu.push(b);
                if(s)
                st.push(b);
                if(pq)
                prq.push(b);
            }
            else{
                if(q){
                    if(!qu.empty() && b==qu.front()){
                        qu.pop();
//                    debug(qu.front());
                    }
                    else q=false;
//                    debug("anjan");
                }
                if(s){
                    if(!st.empty() && b==st.top()){
                        st.pop();
                    }
                    else s=false;
//                    debug("anjan");
                }
                if(pq){
                    if(!prq.empty() && b==prq.top()){
//                        debug("anjan");
                    prq.pop();
                    }
                    else pq=false;
                }
            }
        }
        int c=0;
            if(q==1) c++;
            if(s==1) c++;
            if(pq==1) c++;
//         debug(c);
            if(c>1){
                printf("not sure\n");
            }
            else if(c==0){
                printf("impossible\n");
            }
            else{
                if(q==1){
                    printf("queue\n");
                }
                else if(s==1){
                    printf("stack\n");
                }
                else{
                    printf("priority queue\n");
                }
            }
    }
    return 0;
}
