#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string s,a;
    int i,j,f;
    while(1)
    {
        getline(cin,s);
        int l=s.size();
        if(l==4&&s[0]=='D'&&s[1]=='O'&&s[2]=='N'&&s[3]=='E') break;
        else
        {
            for(i=0;i<l;i++)
            {
                if(isalpha(s[i]))
                {
                    if('A'<=s[i]&&'Z'>=s[i])
                    {
                        a+=s[i]+32;
                    }
                    else
                    {
                        a+=s[i];
                    }
                }
            }
            l=a.size();
            j=l-1;
            f=1;
            for(i=0;i<l/2;i++,j--)
            {
                if(a[i]!=a[j])
                {
                    f=0;
                    break;
                }
            }
            if(f==0)
                cout<<"Uh oh.."<<endl;
            else
                cout<<"You won't be eaten!"<<endl;
                a.clear();
        }
    }
    return 0;
}
