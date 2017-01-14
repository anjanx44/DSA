#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    long int a,b[20005],n,i,d;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld",&a);
        for(i=0;i<a;i++)
        {
            scanf("%ld",&b[i]);
        }
        sort(b,b+a);
        d=0;
        if(b[i]%3==0){
        for(i=a-1;i=0;i=i-3)
        {
            d+=b[i];
        }
        printf("%ld\n",d);}
        else if(b[i]%3==1)
        {
        for(i=a-1;i=0;i=i-3)
        {
            d+=b[i];
        }
        printf("%ld\n",d);}
        else
        {
        for(i=a-1;i>0;i=i-3)
        {
            d+=b[i];
        }
        printf("%ld\n",d);}

    }
    return 0;
}
