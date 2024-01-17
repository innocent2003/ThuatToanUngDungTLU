#include <iostream>
using namespace std;
long long fibo(long long K){
	if(K<0) return 0;
	long long a = 0, b = 1;
    while (b <= K) {
        long long temp = a;
        a = b;
        b = temp + b;
    }
    if(b<0) return 0;
    return b;
}
int main(){
	long long n;
	cin>>n;
	long long a = fibo(n);
	cout<< a;
}
