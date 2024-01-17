#include <iostream>
#include <map>

using namespace std;
map<long long, long long> a;
long long demo(long long n){
//	if(n == 0) return 0;
//	if(n == 1) return 1;
//	if(n == 2) return 2;
	if(n==1) return 1;
	if(n==3) return 3;
//	auto p = a.find(n);
//	if(p !=a.end()) return p->second;
//	if(n<=3) return n;
	if(a.find(n) != a.end()){
		return a[n];
	}
	long long b;
	if(n%2==0) b =  demo(n/2);
	if(n%4==1) b =  2 * demo((n-1)/2 +1)-demo(n/4);
	if(n % 4 == 3) b = 3 * demo((n-3)/2 + 1)- 2 * demo((n-3)/4);
	a[n] = b;
	return b;
	
}
int main(){
	long long k;
	cout<<"Nhap n = ";
	cin >> k;
	long long a = demo(k);
	cout<<"g("<<k<<") = "<<a;
}
