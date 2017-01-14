#include<stdio.h>
int main()
{
    long n,a[35],c,i,j;
    while(scanf("%ld",&n)==1)
    {
        if(n==0) break;
        i=0;
        while(n!=0)
        {
            a[i]=n%2;
            n/=2;
            i++;
        }
        c=0;
        for(j=0;j<i;j++)
        {
            if(a[j]==1)
            c++;
        }
        printf("The parity of ");
        for(j=i-1;j>=0;j--)
        printf("%ld",a[j]);
        printf(" is %d (mod 2).\n",c);
    }
    return 0;
}
