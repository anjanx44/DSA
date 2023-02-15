#include<stdio.h>
int main()
{
    int n,f,a[1000],i,j,c,k,mid;
    while(scanf("%d %d",&n,&c)==2)
    {
        k=1;
        a[0]=1;
        for(i=2;i<=n;i++)
        {
            f=1;
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                a[k]=i;
                k++;
            }
        }
        printf("%d %d:",n,c);
        mid=k/2;
        c=c*2;
        if(c>=k)
        {
            for(i=0;i<k;i++)
            printf(" %d",a[i]);
            printf("\n");
        }
        else if(k%2==0)
        {
            c=c/2;;
            for(i=mid-c;i<mid+c;i++)
            printf(" %d",a[i]);
            printf("\n");
        }
        else if(k%2==1)
        {
            c=(c-1)/2;
            for(i=mid-c;i<=mid+c;i++)
            printf(" %d",a[i]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
