#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

long long dp[105][105];
long long ncr(int n,int r);
int main(){
    int n,r;
    while(scanf("%d %d",&n,&r)==2){
        if(n==0&&r==0) break;
        memset(dp,-1,sizeof(dp));
        printf("%d things taken %d at a time is %lld exactly.\n",n,r,ncr(n,r));
    }
    return 0;
}

long long ncr(int n,int r){
    if(dp[n][r]!=-1) return dp[n][r];
    else if(n==r) return 1;
    else if(r==1) return n;
    else if(n<r) return 0;
    else{
        return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
    }
}
