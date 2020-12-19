#define FUNCTION(name, op) 
#define minimum(a, b) if(b < a) a = b 
#define maximum(a, b) if(b > a) a = b 
#define foreach(a, b) for(int b = 0; b < a.size(); b++)  
#define io(a) cin >> a
#define INF 100000000
#define toStr(a) #a  

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
