#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string a,b;
    int cno=0,t;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,a);
        getline(cin,b);
        int l=a.size();
        int le=b.size();
        for(int i=0;i<l;i++)
            if(a[i]==' ')
            {
                a.erase(i,1);
                i--;
            }
        for(int i=0;i<le;i++)
            if(b[i]==' ')
            {
                b.erase(i,1);
                i--;
            }
        l=a.size();
        le=b.size();
        //printf(" %d %d\n",l,le);
        if(l!=le)
        {
            printf("Case %d: No\n",++cno);
            continue;
        }
        for(int i=0;i<l;i++)
        {
            if(a[i]<=90)
            a[i]+=32;
            if(b[i]<=90)
            b[i]+=32;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        /*for(int i=0;i<l;i++)
            printf("%c",a[i]);
            printf("\n");
            for(int i=0;i<l;i++)
            printf("%c",b[i]);
            printf("\n");*/
        int c=1;
        if(a==b)
        c=0;
        if(c==0)
        printf("Case %d: Yes\n",++cno);
        else
        printf("Case %d: No\n",++cno);
    }
    return 0;
}
