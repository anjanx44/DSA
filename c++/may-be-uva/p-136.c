#include<stdio.h>
int main()
{
    long long int i,j=1,a[1550];
    i=1;j=1;
    while(1)
    {
            if(i%3==0||i%2==0||i%5==0)
            {
                a[j]=i;
                i++;
                j++;
                printf("a=%lld\ni=%lld\nj=%lld\n",a[j],i,j);
            }
            if(j==1500)break;
    }
    printf("a=%lld\ni=%lld\nj=%lld\n",a[j],i,j);
    return 0;
}
