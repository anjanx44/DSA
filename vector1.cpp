#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int i,a;
    vector <int> l;
    while(a!=0)
    {
        scanf("%d",&a);
        l.push_back(a);
    }
    printf("size=%d\n",l.size());
    for(i=0;i<l.size();i++)
    printf("%d",l[i]);
    return 0;
}
