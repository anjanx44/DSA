#include <stdio.h>
long nways [7500]={0};
void coin_change()
{

int coins[]={ 1,5,10,25,50},i,j;
nways[0]=1;
for (i=0;i<5;i++ )
{
for ( j=coins[i];j<7500;j++ )
nways [j]=nways[j]+nways[j-coins[i]];
}
}

int main()
{
coin_change();
int n;
while (scanf("%d", &n)!=EOF)
printf("%ld\n",nways[n]);
return 0;
}
