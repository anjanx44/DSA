#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
long int a[20005];
int main()
{
freopen("D://test.txt","r",stdin);
freopen("D://out.txt","w",stdout);
long int n,c,i,j,k,t,v,m,add;

scanf("%ld",&n);

for(i=0;i<n;i++)
{
scanf("%ld",&c);
for(j=1;j<=c;j++)
{
scanf("%ld",&a[j]);
}
sort(a,a+c+1);
m=n%3;
add=0;
for(j=c;j>m;j=j-3)
{
add=add+a[j-2];
}
if(m==2)
add=add+a[1];
if(c>=3)
printf("%ld\n",add);
else
printf("0\n");
}
return 0;
}
