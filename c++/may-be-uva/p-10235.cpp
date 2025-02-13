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
#define MAXP 1000000
//#define MAX 100000
#define pb push_back

int a[MAXP+5];
void sieve(void);

int main(){
    int n;
    sieve();
    while(cin>>n){
        int p=n,b[10],i=0;
        while(p!=0){
            b[i++]=p%10;
            p/=10;
        }
        int nr=0;
        for(int j=0;j<i;j++){
            nr=nr*10+b[j];
        }
//        printf("%d %d\n",n,nr);
        if((a[n])&&n!=nr&&a[nr]){
            printf("%d is emirp.\n",n);
        }
        else if(!a[n]){
            printf("%d is not prime.\n",n);
        }
        else if(a[n]){
            printf("%d is prime.\n",n);
        }
    }
}

void sieve(void){
    memset(a,1,sizeof(a));
    a[0]=a[1]=0;
    for(int i=2;i*i<=MAXP;i++){
        if(a[i]){
            for(int j=i*i;j<=MAXP;j+=i){
                a[j]=0;
            }
        }
    }
}
