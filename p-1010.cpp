#include<algorithm>
#include<bitset>
#include<complex>
#include<deque>
#include<exception>
#include<fstream>
#include<functional>
#include<hash_map>
#include<hash_set>
#include<iomanip>
#include<ios>
#include<iosfwd>
#include<iostream>
#include<iso646.h>
#include<istream>
#include<iterator>
#include<limits>
#include<list>
#include<locale>
#include<map>
#include<memory>
#include<new>
#include<numeric>
#include<ostream>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<stdexcept>
#include<streambuf>
#include<string>
#include<strstream>
#include<utility>
#include<valarray>
#include<vector>
#include<cassert>
#include<cctype>
#include<cerrno>
#include<cfloat>
#include<ciso646>
#include<climits>
#include<clocale>
#include<cmath>
#include<csetjmp>
#include<csignal>
#include<cstdarg>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<cwchar>
#include<cwctype>
using namespace std;
int main()
{
    int t,i=0,n,m,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        if(n==1||m==1)
        ans=n*m+1;
        else if(n==2||m==2)
        if(n%2!=0||m%2!=0)
        ans=(n*m)/2+1;
        else
        ans=(n*m)/2+2;
        else if(n%2==0||m%2==0)
        ans=(n*m)/2;
        else if(n%2==1||m%2==1)
        ans=((n*m)/2)+1;
        printf("Case %d: %d\n",++i,ans);
    }
    return 0;
}
