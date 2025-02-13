#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
using namespace std;
int main()
{
    stack <char> st;
    int t;
    string s;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int f=0;
        getline(cin,s);
        if(s[0]=='\0')
        {
            printf("Yes\n");
            continue;
        }
        if(s.size()%2!=0||s.length()==1)
        {
            printf("No\n");
            continue;
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(st.empty()&&(s[i]==')'||s[i]==']'))
            {
                {
                    f=1;
                    printf("No\n");
                    break;
                }
            }
            else if(s[i]==')'&&st.top()=='(')
            {
                st.pop();
            }
            else if(s[i]==']'&&st.top()=='[')
            {
                st.pop();
            }
        }
        if(f==1) continue;
        if(st.empty())
        printf("Yes\n");
        else
        {
            printf("No\n");
            while(!st.empty())
            {
                st.pop();
            }
        }
    }
    return 0;
}
