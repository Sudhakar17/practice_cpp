// https://www.hackerrank.com/challenges/preprocessor-solution/problem
/* Enter your macros here */
#include <climits>
#define INF INT_MAX
#define io(v) cin>>v
#define FUNCTION(func,sign) void func(int &a,int &b){a=(a)sign(b)?a:b;}
#define toStr(s) #s
#define foreach(vec,i) for(int i=0;i<vec.size();i++)

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}