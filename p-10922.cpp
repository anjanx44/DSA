#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char s[1005];
    int n,i,l,dgr,sum,p;
    while(scanf("%s",s)==1)
    {
        l=strlen(s);
        if(l==1&&s[0]=='0')
            break;
        else
        {
            sum=0;
            for(i=0;i<l;i++)
            {
                sum+=s[i]-'0';
            }
            if(sum%9==0)
            {
                dgr=1;

                while(sum>9)
                {
                    dgr++;
                    p=sum;
                    sum=0;
                    while(p!=0)
                    {
                        sum+=p%10;
                        p/=10;
                    }
                }
                printf("%s is a multiple of 9 and has 9-degree %d.\n",s,dgr);
            }
            else
               printf("%s is not a multiple of 9.\n",s);
        }
    }
    return 0;
}
