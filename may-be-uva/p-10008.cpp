#include<stdio.h>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string a,s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int m,n[26]={0},max=0;
    scanf("%d",&m);
    getchar();
    for(int k=0;k<m;k++)
    {
        getline(cin,a);
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                n[a[i]-65]++;
                if((n[a[i]-65])>max)
                {
                    max=n[a[i]-65];
                }
            }
            else if(a[i]>='a'&&a[i]<='z')
            {
                n[a[i]-97]++;
                if((n[a[i]-97])>max)
                {
                    max=n[a[i]-97];
                }
            }
        }
    }
    for(int i=max;i>=1;i--)
    {
        for(int j=0;j<26;j++)
        {
            if(n[j]==i)
            {
                cout<<s[j]<<" "<<i<<endl;
            }
        }
    }
    return 0;
}
