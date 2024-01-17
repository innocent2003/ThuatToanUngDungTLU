//#include <iostream>
//using namespace std;
//long long demo(long long n){
//	if(n == 0) return 0;
//	if(n == 1) return 1;
//	if(n == 2) return 2;
//	else{
//		int k = n/3;
//		if(n % 3 == 0){
//			return demo(2 *k);	
//		}else if(n % 3 == 1){
//			return demo(2 * k) + demo(2 * k +1);
//		}else{
//			return demo(2 * k) + demo(2 * k +1) + demo(2 * k +2);
//		}
//	}
//}
//int main(){
//	long long n;
//	cout<<"Nhap n = ";cin>>n;
//	long long a = demo(n);
//	cout<<"f("<<n<<") = "<<a;
//}

//#include <iostream>
//#include <map>
//
//using namespace std;
//int n;
//map<int, long long> a;
//long long f(int n){
//	if(n < 3) return n;
//	auto p = a.find(n);
//	if(p != a.end()) return p->second;
//	int k = n/3;
//	long long r = f(2 *k);
//	if(n % 3 > 0) r +=f(2*k+1);
//	if(n % 3 > 1) r += f(2*k+2);
//	a[n] = r;
//	return r;
//}
//int main(){
//	cout<< "Nhap n = ";
//	cin >> n;
//	cout << "f("<<n<<") = "<<f(n);
//}

#include <iostream>
#include <map>
using namespace std;
map <long long , long long> b;
long long n;
long long f(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	if(n == 2) return 2;

	if(b.find(n) != b.end()){
		return b[n];
	}
		long long k = n/3;
	long long a = 0;
	if(n%3 == 0) a = f(2*k);
	if(n % 3 == 0) a = f(2*k);
	if(n % 3 == 1) a = f(2 * k) + f( 2 * k +1);
	if(n % 3 == 2) a = f(2* k )+ f(2 * k + 1) + f(2*k+2);
	b[n] = a;
	return a;
	
}
int main(){
	cout<< "Nhap n = ";
	cin >> n;
	long long c = f(n);
	cout << "f("<<n<<") = "<<c;
}


//#include <iostream>
//#include <map>
//using namespace std;
//
//map<long long, long long> b;
//long long n;
//
//long long f(int n) {
//    if (n == 0) return 0;
//    if (n == 1) return 1;
//    if (n == 2) return 2;
//
//    if (b.find(n) != b.end()) {
//        return b[n];
//    }
//
//    long long k = n / 3;
//    long long a = 0;
//
//    if (n % 3 == 0) {
//        a = f(2 * k);
//    } else if (n % 3 == 1) {
//        a = f(2 * k) + f(2 * k + 1);
//    } else if (n % 3 == 2) {
//        a = f(2 * k) + f(2 * k + 1) + f(2 * k + 2);
//    }
//
//    b[n] = a;
//    return a;
//}
//
//int main() {
//    cout << "Nhap n = ";
//    cin >> n;
//    long long c = f(n);
//    cout << "f(" << n << ") = " << c;
//
//    return 0;
//}





























