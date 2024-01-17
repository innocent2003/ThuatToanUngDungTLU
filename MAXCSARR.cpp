//#include <iostream>
//using namespace std;
//const int MAX = 1000;
//int m, a[MAX], n , b[MAX];
//int f(int m, int n){
//	if(m ==0 || n == 0) return 0;
//	if(a[m] == b[n]) return f(m-1,n-1)+a[m];
//	return max(f(m,n-1),f(m-1,n));
//}
//int main(){
//	cout<<"Nhap m = "; cin >> m;
// 	for(int i = 1; i <=m; i++){
// 		cout<<"a["<<i<<"] = ";cin >> a[i];
//	 }
//	cout<<"Nhap n = "; cin >> n;
//	for(int i = 1; i <=n; i++){
//		cout<<"b["<<i<<"] = ";cin >> b[i];
//	}
//	cout<<"Day con co tong lon nhat = "<<f(m,n);
//	
// }

#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1000;

int m, a[MAX], n, b[MAX];
vector<vector<int>> dp(MAX, vector<int>(MAX, -1));

int f(int m, int n) {
    if (m == 0 || n == 0)
        return 0;

    if (dp[m][n] != -1)
        return dp[m][n];

    if (a[m] == b[n])
        dp[m][n] = f(m - 1, n - 1) + a[m];
    else
        dp[m][n] = max(f(m, n - 1), f(m - 1, n));

    return dp[m][n];
}

int main() {
    cout << "Nhap m = ";
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Nhap n = ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "b[" << i << "] = ";
        cin >> b[i];
    }

    cout << "Day con co tong lon nhat = " << f(m, n);

    return 0;
}

