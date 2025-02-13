#include<stdio.h>
int anu(int n);
int main()
{
    int n,s,i=0,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int k=n;
        if(n<9)
        s=n*n;
        else
        {
            s=0;
            while(n!=0)
            {
                s+=(n%10)*(n%10);
                n/=10;
            }
        }
        if(s<9)
        {
            if(s==1)
            printf("Case #%d: %d is a Happy number.\n",++i,k);
            else
            printf("Case #%d: %d is an Unhappy number.\n",++i,k);
        }
        else{
            int c;
        while(s>9)
        {
            n=s;
            c=0;
            while(s!=0)
            {
                s/=10;
                c++;
            }
            if(c==1)
            {
                s=n*n;
            }
            else if(c==2)
            {
                s=(n%10)*(n%10)+(n/10)*(n/10);
            }
            else
            {
                s=anu(n);
            }
        }
        if(s==1)
        printf("Case #%d: %d is a Happy number.\n",++i,k);
        else
        printf("Case #%d: %d is an Unhappy number.\n",++i,k);
    }
    }
    return 0;
}
int anu(int n)
{
    int k=0;
    while(n!=0)
    {
        k+=(n%10)*(n%10);
        n/=10;
    }
    return k;
}
