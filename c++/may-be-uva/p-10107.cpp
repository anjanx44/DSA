#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    while(scanf("%d",&n)==1)
    {
        v.push_back(n);
        int l=v.size();
        sort(v.begin(),v.end());
        if(l%2==0)
        {
            int mid=l/2;
            mid=(v[mid]+v[mid-1])/2;
            printf("%d\n",mid);
        }
        else
        {
            int mid=l/2;
            printf("%d\n",v[mid]);
        }
    }
    return 0;
}
