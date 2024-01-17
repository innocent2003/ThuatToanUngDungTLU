////#include <iostream>
////using namespace std;
////int n;
////int a[10001];
////bool check(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8,int a9){
////	if(a1+a2-a3+a4-a5+a6-a7+a8-a9==23){
////		return true;
////	}
////	return false;
////}
////bool check1(int a[]){
////	if(a[0]+a[1]-a[2]+a[3]-a[4]+a[5]-a[6]+a[7]-a[8]==23){
////		return true;
////	}
////	return false;
////}
//////void print(){
//////	for(i)
//////}
//////void check(int k){
//////	if(k > n){
//////		return;
//////	}
//////}
////void print(){
////	for(int i=1; i <=9; i++){
////		cout<<a[i]<<" ";
////	}
////	cout << endl;
////}
////void gen(int k){
////	if(k > n){
////		print();
////		return;
////	}
////	for(int i = 1; i <=n; i++){
////		if(check1(a)){
////			a[k] = i;
////			gen(k+1);
////		}
////	}
////}
////int main(){
////	cin >>n;
////	gen(1);
////}
//#include <iostream>
//using namespace std;
//
//const int n = 9;
//int a[n + 1];
//
//bool check1(int a[]) {
//    if (a[1] + a[2] - a[3] + a[4] - a[5] + a[6] - a[7] + a[8] - a[9] == 23) {
//        return true;
//    }
//    return false;
//}
//
//void print() {
//    for (int i = 1; i <= n; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//}
//
//void gen(int k) {
//    if (k > n) {
//        if (check1(a)) {
//            print();
//        }
//        return;
//    }
//    for (int i = 1; i <= n; i++) {
//        a[k] = i;
//        gen(k + 1);
//    }
//}
//
//int main() {
//    gen(1);
//    return 0;
//}
#include <iostream>
using namespace std;

const int n = 9;
int a[n + 1];
bool chosen[n + 1];

bool check1() {
    if (a[1] + a[2] - a[3] + a[4] - a[5] + a[6] - a[7] + a[8] - a[9] == 23) {
        return true;
    }
    return false;
}

void print() {
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void gen(int k) {
    if (k > n) {
        if (check1()) {
            print();
        }
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!chosen[i]) {
            chosen[i] = true;
            a[k] = i;
            gen(k + 1);
            chosen[i] = false;
        }
    }
}

int main() {
    gen(1);
    return 0;
}


