#include<stdio.h>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int n,l,k,p,m,i;
    string s,a;
    while(cin>>n)
    {
        if(n==0) break;
        else
        {
            cin>>s;
            l=s.size();
            k=l/n;
            p=k-1;
            m=-1;
            while(1)
            {
                for(i=p;i>m;i--)
                {
                    a+=s[i];
                }
                if(i==l-k-1) break;
                p+=k;
                m+=k;
            }
            cout<<a<<endl;
            a.clear();
        }
    }
    return 0;
}
