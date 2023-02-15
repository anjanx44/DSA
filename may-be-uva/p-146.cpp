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
#include<cstring>
#include<cmath>
#include<algorithm>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="#") break;
        bool p=next_permutation(s.begin(),s.end());
        if(p==true)
        cout<<s<<endl;
        else
        cout<<"No Successor"<<endl;
    }
    return 0;
}
