#include <iostream>
using namespace std;
long long demo(int n){
	if(n==1) return 1;
	if(n==3) return 3;
	if(n%2==0) return demo(n/2);
	if(n%4==1) return 2 * demo((n-1)/2 +1)-demo(n/4);
	if(n % 4 == 3) return 3 * demo((n-3)/2 + 1)- 2 * demo((n-3)/4);
	
}
int main(){
	long long k;
	cout<<"Nhap n = ";
	cin >> k;
	long long a = demo(k);
	cout<<"g("<<k<<") = "<<a;
}
