#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int dp[110][110];
int main(){
    int a,b,aa[110],ba[110],cno=0;
    while(scanf("%d %d",&a,&b)==2){
        if(a==0&&b==0) break;
        for(int i=0;i<a;i++){
            scanf("%d",&aa[i]);
        }
        for(int i=0;i<b;i++){
            scanf("%d",&ba[i]);
        }
        for(int i=0;i<=a;i++){
            for(int j=0;j<=b;j++){
                if(i==0||j==0) dp[i][j]=0;
                else if(aa[i-1]==ba[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",++cno,dp[a][b]);
    }
    return 0;
}
