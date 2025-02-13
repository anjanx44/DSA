#include<stdio.h>
#include<algorithm>
using namespace std;
int a[2000010];
int main()
{
    long int n,i;
    while(scanf("%ld",&n)==1)
    {
        if(n==0) break;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+i);
        for(i=0;i<n;i++)
        {
            printf("%ld",a[i]);
            if (i<(n-1))
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
