#include<algorithm>
#include<string>
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string s;
    int t;
    scanf("%d",&t);

    while(t--)
    {
        cin>>s;
        int l=s.size();
        sort(s.begin(),s.end());
        cout<<s<<endl;
        while(next_permutation(s.begin(),s.end()))
        {
            cout<<s<<endl;
        }
        cout<<endl;
    }
    return 0;
}
