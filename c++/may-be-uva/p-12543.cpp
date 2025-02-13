#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    string a,b;
    int count=0;
    while(cin>>a)
    {
        if(a=="E-N-D") break;
        else
        {
            for(int i=0;i<a.size();i++)
            {
                if(isalpha(a[i])==0&&a[i]!='-')
                {
                    a.erase(a.begin()+i);
                    i--;
                }
            }
            if(a.size()>count)
            {
                count=a.size();
                b=a;
            }
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]>='A'&&b[i]<='Z')
        {
            b[i]=b[i]+32;
        }
    }
    cout<<b<<endl;
    return 0;
}
