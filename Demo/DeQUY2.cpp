#include <iostream>
using namespace std;
int gen(int k){

	if(k == 0) return 0;
	if(k == 1)  return 1;
	if(k == 2) return 2;
	

	int n = k/3;
	if(k%3==0) return gen(2*n);
	if(k%3 == 1) return gen(2 *n) +gen(2*k+1);
//		if(k % 3 == 2)return gen(2*n)+gen(2*n+1)+gen(2*k+2);
	
	return gen(2*n)+gen(2*n+1)+gen(2*k+2);
}
int main(){
	int k; cin >> k;
	cout <<gen(k);
}
