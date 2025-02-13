#include<stdio.h>
int main()
{
    int coin[]={1,5,10,25,50},i,n,j,way[7495]={0};;
    way[0]=1;
    for(i=0;i<5;i++)
    {
    for(j=coin[i];j<=7495;j++)
    way[j]=way[j]+way[j-coin[i]];
    }
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",way[n]);
    }
    return 0;
}
