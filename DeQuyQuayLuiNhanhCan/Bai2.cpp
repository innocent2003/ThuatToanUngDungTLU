////#include <iostream>
////using namespace std;
////int a[10000],n;
////void print(){
////	for(int i = 1; i<=n; i++){
////		cout<<a[i];
////	}
////	cout<<endl;
////}
////bool check(int k){
////	for(int i  = 1; i <=k -1; i++){
////		if(a[i] == a[k]){
////			return false;
////		}
////	}
////	return true;
////}
////void gen(int k, int e){
////	if(k > n){
////		if(check(k-1)) print();
//////		print();
////		return;
////	}
//////	a[k] = 0;gen(k+1);
//////	a[k] = 1;gen(k+1);
//////	a[k] = 2;gen(k+1);
////	for(int i = 0; i <=2;i++){
////		if(i!=e){
////			a[k] = i;
////			gen(k+1,e);
////		}
////	}
////	
////}
////int main(){
////	cin >>n;
////	gen(1,-1);
////}
//
//
//
//#include <iostream>
//using namespace std;
//
//int a[10000], n;
//
//void print() {
//    for (int i = 1; i <= n; i++) {
//        cout << a[i];
//    }
//    cout << endl;
//}
//
//void gen(int k) {
//    if (k > n) {
//        print();
//        return;
//    }
//
//    for (int i = 0; i <= 2; i++) {
//        bool isDuplicate = false;
//        for (int j = 1; j < k; j++) {
//            if (a[j] == i) {
//                isDuplicate = true;
//                break;
//            }
//        }
//
//        if (!isDuplicate) {
//            a[k] = i;
//            gen(k + 1);
//        }
//    }
//}
//
//int main() {
//    cin >> n;
//    gen(1);
//
//    return 0;
//}
#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> a;

void print() {
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void generateTernaryStrings(int k) {
    if (k == n) {
        print();
        return;
    }

    for (int i = 0; i <= 2; i++) {
        if (k == 0 || (k > 0 && a[k - 1] != i)) {
            a[k] = i;
            generateTernaryStrings(k + 1);
        }
    }
}

int main() {
    cout << "Nhap N = ";
    cin >> n;

    a.resize(n);
    generateTernaryStrings(0);

    return 0;
}


