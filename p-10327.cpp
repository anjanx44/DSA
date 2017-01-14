#include<stdio.h>
int main()
{
    int n,a[1002],c,i,p,t;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        c=0;
        for(i=0;i<n-1;i++)
        {
            int p=0;
            while(p<n-i)
            {
                if(a[p]>a[p+1])
                {
                    t=a[p];
                    a[p]=a[p+1];
                    a[p+1]=t;
                    c++;
                }
                p++;
            }
        }
        printf("Minimum exchange operations : %d\n",c);
    }
    return 0;
}
