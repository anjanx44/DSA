#include<stdio.h>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string v[105];
    string s[]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    string a;
    int n,i;
    scanf("%d",&n);
    {
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(n<=16)
        {
            int p=0;
            for(i=0;i<16;i++,p++)
            {
                cout<<v[p]<<": "<<s[i]<<endl;
                if(p==n-1) p=-1;
            }
        }
        else
        {
            i=0;
            int p=0;
            int j=0;
            while(1)
            {
                if(i%16==0&&i>=n) break;
                cout<<v[p]<<": "<<s[j]<<endl;
                if(p==n-1) p=-1;
                if(j==15) j=-1;
                i++;
                j++;
                p++;
            }
        }
    }
    return 0;
}
