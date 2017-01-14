#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<bitset>
#include<string>
#include <sstream>
#include <fstream>
#include<cctype>
#include<cstring>
#include<cmath>
#include<algorithm>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
string s,r;
int n=0,i;
while(cin>>s)
{
    if(s=="E-N-D")
    {
        for(i=0;i<r.size();i++)
        {
            if(r[i]>='A'&&r[i]<='Z')
            r[i]=r[i]+32;
        }
        cout<<r<<endl;
        break;
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
            if(isalpha(s[i])==0&&s[i]!='-')
            {
                s.erase(s.begin()+i);
                i--;
            }
        }
        if(s.size()>n)
        {
            n=s.size();
            r=s;
        }
    }
}
return 0;
}
