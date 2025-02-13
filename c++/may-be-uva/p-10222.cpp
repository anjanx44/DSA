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
#define FOR1(i,n) for(i=1;i<=(int)n;i++)
#define FOR1R(i,n) for(i=n;i>=1;i--)
#define PI 3.14159265358979323846264338327950
using namespace std;
int main()
{
    string s;
    int i;
    while(getline(cin,s))
    {
        int l=s.size();
        FOR(i,l)
        {
            if(s[i]==' ') cout<<' ';
            else if(s[i]=='E'||s[i]=='e') cout<<'q';
            else if(s[i]=='R'||s[i]=='r') cout<<'w';
            else if(s[i]=='T'||s[i]=='t') cout<<'e';
            else if(s[i]=='Y'||s[i]=='y') cout<<'r';
            else if(s[i]=='U'||s[i]=='u') cout<<'t';
            else if(s[i]=='I'||s[i]=='i') cout<<'y';
            else if(s[i]=='O'||s[i]=='o') cout<<'u';
            else if(s[i]=='P'||s[i]=='p') cout<<'i';
            else if(s[i]=='['||s[i]=='{') cout<<'o';
            else if(s[i]==']'||s[i]=='}') cout<<'p';
            else if(s[i]=='D'||s[i]=='d') cout<<'a';
            else if(s[i]=='F'||s[i]=='f') cout<<'s';
            else if(s[i]=='G'||s[i]=='g') cout<<'d';
            else if(s[i]=='H'||s[i]=='h') cout<<'f';
            else if(s[i]=='J'||s[i]=='j') cout<<'g';
            else if(s[i]=='K'||s[i]=='k') cout<<'h';
            else if(s[i]=='L'||s[i]=='l') cout<<'j';
            else if(s[i]==';'||s[i]==':') cout<<'k';
            else if(s[i]=='\"'||s[i]=='\'') cout<<'l';
            else if(s[i]=='\\'||s[i]=='|') cout<<';';
            else if(s[i]=='C'||s[i]=='c') cout<<'z';
            else if(s[i]=='V'||s[i]=='v') cout<<'x';
            else if(s[i]=='B'||s[i]=='b') cout<<'c';
            else if(s[i]=='N'||s[i]=='n') cout<<'v';
            else if(s[i]=='M'||s[i]=='m') cout<<'b';
            else if(s[i]==','||s[i]=='<') cout<<'n';
            else if(s[i]=='.'||s[i]=='>') cout<<'m';
            else if(s[i]=='/'||s[i]=='?') cout<<',';
            else if(s[i]=='2'||s[i]=='@') cout<<'`';
            else if(s[i]=='#'||s[i]=='3') cout<<'1';
            else if(s[i]=='$'||s[i]=='4') cout<<'2';
            else if(s[i]=='%'||s[i]=='5') cout<<'3';
            else if(s[i]=='^'||s[i]=='6') cout<<'4';
            else if(s[i]=='&'||s[i]=='7') cout<<'5';
            else if(s[i]=='*'||s[i]=='8') cout<<'6';
            else if(s[i]=='9'||s[i]=='(') cout<<'7';
            else if(s[i]==')'||s[i]=='0') cout<<'8';
            else if(s[i]=='-'||s[i]=='_') cout<<'9';
            else if(s[i]=='+'||s[i]=='=') cout<<'0';
        }
        cout<<endl;
    }
    return 0;
}
