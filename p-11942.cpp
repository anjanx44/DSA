#include<stdio.h>
int main()
{
    int n,a[15];
    while(scanf("%d",&n)==1)
    {
        printf("Lumberjacks:\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<10;j++)
            scanf("%d",&a[j]);
            int f=1,k=1;
//            printf("%d %d\n",f,k);
            for(int j=1;j<10;j++)
            {
                if(!(a[j-1]<=a[j]))
                f=0;
                else if(!(a[j-1]>=a[j]))
                k=0;
            }
//            printf("%d %d\n",f,k);
            if(f==1||k==1)
            printf("Ordered\n");
            else
            printf("Unordered\n");
        }

    }
    return 0;
}
