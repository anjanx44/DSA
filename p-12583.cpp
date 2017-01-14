#include<stdio.h>
int main()
{
    int t,n,k,i,j,m,c,cse=0;
    char s[505];
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d %d %s",&n,&k,s);
        for(i=1;i<n;i++)
        {
            for(j=i-1;j>=i-k;j--)
            {
                if(s[i]==s[j])
                {
                    c++;
                    break;
                }
                if(j==0) break;
            }
        }
        printf("Case %d: %d\n",++cse,c);
    }
    return 0;
}
