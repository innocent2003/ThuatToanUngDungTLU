//#include <iostream>
//#include <map>
//
//using namespace std;
//map <int, int > c;
//
//int a[100001];
//int f(int s, int n){
//	if(n ==0 ){
//		if(s == 0)return 0;
//		else return 1;
//	}
//	if(c.find(n) != c.end()){
//		return c[n];
//	}
//	int d = f(s,n-1);
//	int e = f(s-a[n-1],n-1);
//	int kq = d+e;
//	c[n] = kq;
//	return kq;
//}
//int main(){
//	int n,m;
//	cin >>n;
//	for(int i = 1; i <=n; i++){
//		cin >>a[i];
//	}
//	cin >>m;
//	cout<<f(m,n);
//}
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<string, int> memo;

int countSubarraysWithSum(int S, int n, const vector<int>& A) {
    // Base cases
    if (n == 0) {
        return (S == 0) ? 1 : 0;
    }

    // T?o key d? luu vào b? nh? d? quy
    string key = to_string(S) + "_" + to_string(n);

    // Ki?m tra xem dã tính toán tru?c dó chua
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }

    // Ð?m s? dãy con không ch?a ph?n t? cu?i cùng c?a A
    int withoutLast = countSubarraysWithSum(S, n - 1, A);

    // Ð?m s? dãy con ch?a ph?n t? cu?i cùng c?a A
    int withLast = countSubarraysWithSum(S - A[n - 1], n - 1, A);

    // T?ng c? hai lo?i dãy con
    int result = withoutLast + withLast;

    // Luu k?t qu? vào b? nh? d? quy
    memo[key] = result;

    return result;
}

int main() {
    int N;
    int S;
    cout << "Nhap m = ";
    cin >> S;
    cout << "Nhap n = ";
    cin >> N;

    vector<int> A(N);
  
    for (int i = 0; i < N; ++i) {
    	cout<<"a["<<i<<"] = ";
        cin >> A[i];
    }

    
   

    int result = countSubarraysWithSum(S, N, A);

    cout << "Co tat ca " <<  result << " cach phan tich.";

    return 0;
}

