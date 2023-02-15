#include<stdio.h>
int main()
{
   long long a[100];
   int i,v;
   while(scanf("%d",&v)==1)
   {
       if(v==0)break;
       a[0]=1;
       a[1]=1;
       for(i=2;i<=v;i++)
       {
           a[i]=a[i-2]+a[i-1];
       }
       printf("%lld\n",a[v]);
   }
   return 0;
}
