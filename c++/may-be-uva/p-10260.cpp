#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<deque>
#include<list>
#include<stack>
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define FORR(i,n) for(int i=n-1;i>=0;i--)
#define FOR1(i,n) for(i=1;i<(int)n;i++)
#define FOR1R(i,n) for(i=n-1;i>=1;i--)
#define PI 3.14159265358979323846264338327950
using namespace std;
int main()
{
    string s,a;
    int l;
    while(cin>>s)
    {
        l=s.size();
        FOR(i,l)
        {
            if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
            {
                if(s[i-1]!='B'&&s[i-1]!='F'&&s[i-1]!='P'&&s[i-1]!='V')
                printf("1");
            }
            else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
            {
                if(s[i-1]!='C'&&s[i-1]!='G'&&s[i-1]!='J'&&s[i-1]!='K'&&s[i-1]!='Q'&&s[i-1]!='S'&&s[i-1]!='X'&&s[i-1]!='Z')
                printf("2");
            }
            else if(s[i]=='D'||s[i]=='T')
            {
                if(s[i-1]!='D'&&s[i-1]!='T')
                printf("3");
            }
            else if(s[i]=='L')
            {
                if(s[i-1]!='L')
                printf("4");
            }
            else if(s[i]=='M'||s[i]=='N')
            {
                if(s[i-1]!='M'&&s[i-1]!='N')
                printf("5");
            }
            else if(s[i]=='R')
            {
                if(s[i-1]!='R')
                printf("6");
            }
        }
        printf("\n");
    }
    return 0;
}
