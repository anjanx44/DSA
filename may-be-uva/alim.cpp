#include<stdio.h>
long a, b, c, d, e, f;
long long fb[10004];
int main()
{
int n, caseno = 0, cases,i;
scanf("%d", &cases);
while( cases-- )
{
scanf("%ld %ld %ld %ld %ld %ld %d", &a, &b, &c, &d, &e, &f, &n);
fb[0]=a; fb[1]=b; fb[2]=c; fb[3]=d; fb[4]=e; fb[5]=f;
for(i=6;i<=n;i++)
fb[i]=(fb[i-1]%10000007+fb[i-2]%10000007+fb[i-3]%10000007+fb[i-4]%10000007+fb[i-5]%10000007+fb[i-6]%10000007)%10000007;
printf("Case %d: %lld\n", ++caseno, fb[n]%10000007);
}
return 0;
}
