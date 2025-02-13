#include<stdio.h>
long long ncr(long long n,long long r);
long long dp[200][200];
int main()
{
    long long n,r;
    while(scanf("%d%d",&n,&r)==2)
    {
        if(n==0&&r==0) break;
        for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
        dp[i][j]=-1;
        long l=ncr(n,r);
        printf("%ld\n",l);
    }
    return 0;
}
long long ncr(long long n,long long r)
{
    if(r==1) return n;
    else if(n==r) return 1;
    else if(dp[n][r]!=-1) return dp[n][r];
    else
    {
        dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
        return dp[n][r];
    }
}
