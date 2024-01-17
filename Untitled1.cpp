#include <iostream>
#include <map>
using namespace std;
map<pair<int,int>,int> c;
int f(int m,int n){
	if(m == 0 || n == 0) return 0;
	if(c.count(m,n) == 0)
		if(a[m-1] == b[m-1]) c[{m,n}] = 1+f(m-1,n-1);
		else c[{m,n}] = max(f(m-1,n),f(m,n-1));
	return c[{m,n}];	
}
