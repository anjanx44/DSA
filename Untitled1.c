//#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <memory.h>
#include <functional>
#include <numeric>
#include<time.h>
using namespace std;


//For Define
#define forstl(i,s) for(__typeof((s).end()) i=(s).begin(); i != (s).end(); i++)

#define ff first
#define se second
#define mkp make_pair
#define pb push_back
#define sz(a) ((int)a.size())
#define ms(a,n) memset(a, n, sizeof(a))
#define ms0(a) ms(a,0)
#define all(a) a.begin(), a.end()
#define Abs(x) (((x)<0)?-(x):(x))

#define pi 2*acos(0.0)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

#define dbg(x) cout<<#x<<'='<<x<<endl;
#define dbgarr(i,a) cout<<#a<<"["<<i<<"] = "<<a[i]<<" "<<endl;
#define IOS ios_base::sync_with_stdio(0);
//typedef
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pair<int,int>,int > piii;
// Number theory
ll big_mod(ll b,ll p,ll m) {ll res=1;while(p){if(p & 1){res=((res%m)*(b%m))%m;}b=((b%m)*(b%m))%m;p>>=1;}return res;}
ll Pow(ll b,ll p) {ll res=1;while(p){if(p & 1){res=res*b;}b=b*b;p>>=1;}return res;}
ll modinv(ll n,ll m){return big_mod(n,m-2,m);}

////MAIN CODE HERE




class DivideByZero {
public:
 int CountNumbers(vector <int> v) {

     int n=v.size();
     map<int,int>mp;
     for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
            for(int j=0;j<n;j++)
            {
                if(v[i]<v[j])
                {
                    int c=v[j]/v[i];
                    if(mp[c]==0)
                    {
                        mp[c]++;
                        v.push_back(coffee);
                        n=v.size();
                    }
                }
            }
        }

        return mp.size();
    }

 }











// BEGIN CUT HERE
#include <ctime>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		cout << "Testing DivideByZero (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1393412167;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		DivideByZero _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int numbers[] = {9, 2};
				_expected = 3;
				_received = _obj.CountNumbers(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			case 1:
			{
				int numbers[] = {8, 2};
				_expected = 3;
				_received = _obj.CountNumbers(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			case 2:
			{
				int numbers[] = {50};
				_expected = 1;
				_received = _obj.CountNumbers(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			case 3:
			{
				int numbers[] = {1, 5, 8, 30, 15, 4};
				_expected = 11;
				_received = _obj.CountNumbers(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			case 4:
			{
				int numbers[] = {1, 2, 4, 8, 16, 32, 64};
				_expected = 7;
				_received = _obj.CountNumbers(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			case 5:
			{
				int numbers[] = {6, 2, 18};
				_expected = 7;
				_received = _obj.CountNumbers(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			/*case 6:
			{
				int numbers[] = ;
				_expected = ;
				_received = _obj.CountNumbers(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}*/
			/*case 7:
			{
				int numbers[] = ;
				_expected = ;
				_received = _obj.CountNumbers(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}*/
			/*case 8:
			{
				int numbers[] = ;
				_expected = ;
				_received = _obj.CountNumbers(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (_received == _expected)
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE

