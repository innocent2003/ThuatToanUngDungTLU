#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map <pair<int,int>, int> p;
int C(int k, int n){
	if(k == 0 || k == n) return 1;
	pair<int,int> key = {k,n};
	if(p.find(key) != p.end()) return p[key];
	int a = C(k-1,n-1)+C(k,n-1);
	p[key] = a;
	return a;

	
}
int main(){
	int m,n;
	cout<<"Nhap M = ";cin >> m;
	cout<<"Nhap N = ";cin >> n;
	int a = min(m,n);
	
	cout<<"So cach = "<<C(a,m+n);
}