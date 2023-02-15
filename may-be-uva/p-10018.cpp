#include<stdio.h>
#include<math.h>
long long pal(long long n);
long long rev(long long n);
int main()
{
    long long n,t;
    scanf("%lld",&t);
    while(t--)
    {
        int c=0;
        scanf("%lld",&n);
        long long p=pal(n);
        if(p!=0)
        {
             printf("0 %lld\n",p);
             continue;
        }
        else
        {
            long long sum=n;
            int c=0;
            while(p==0)
            {
                sum+=rev(sum);
                c++;
                p=pal(sum);
            }
            printf("%d %lld\n",c,p);
        }
    }
    return 0;
}
long long pal(long long n)
{
    long long s=n;
    int a[20];
    int i=0;
    while(n!=0)
    {
        a[i]=n%10;
        n/=10;
        i++;
    }
    int p=i-1,f=1;
    for(int j=0;j<=i/2;j++,p--)
    {
        if(a[j]!=a[p])
        {
            f=0;
            break;
        }
    }
        //printf("\n%d\n",f);
        if(f==1)
        return s;
        else
        return 0;
}
long long rev(long long n)
{
    long long sum=0;
    int a[20];
    int i=0;
    while(n!=0)
    {
        a[i]=n%10;
        n/=10;
        i++;
    }
    int p=i-1;
    for(int j=0;j<i;j++)
    {
        sum+=a[j]*pow(10,p);
        p--;
    }
    return sum;
}
