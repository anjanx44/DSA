#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    string s[2002];
    char a[80];
    while(scanf("%d",&n)==1)
    {
        s[0]="1111";
        for(i=1;i<=n;i++)
        {
            cin>>s[i];
            gets(a);
        }
        sort(s+1,s+n+1);
        int j,c;
        for(i=1;i<=n;i++)
        {
            c=0;
            for(j=i;j<=n;j++)
            {
                if(s[i]==s[j])
                c++;
            }
            if(s[i]!=s[i-1])
            cout<<s[i]<<" "<<c<<endl;
        }
    }
    return 0;
}
