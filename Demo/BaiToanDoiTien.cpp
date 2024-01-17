//#include <iostream>
//using namespace std;
//const int MAX = 5;
//int c[MAX] = {100, 25, 10, 5, 1};
//int a[MAX],n;
//int main(){
//	cout << "N = "; cin >> n;
//	for(int i =0 ; i < MAX; i++){
//		a[i] = n/c[i];
//		cout<< "So xu "<<c[i]<< ": "<<a[i]<<endl;
//		n = n -c[i] * a[i];
//	}
//}
//#include <iostream>
//using namespace std;
//int a[8];
//int b[8];
//int k;
//void print(){
//
//		cout<<a[0]<<" + "<<a[1]<<" - "<<a[2]<<" + "<<a[3]<<" - "<<a[4]<<" + "<<a[5]<<" - "<<a[6]<<" + "<<a[7]<<" - "<<a[8]<<endl;
//	
//}
//bool check(int a[], int k){
//	return (a[0]+a[1]-a[2]+a[3]-a[4]+a[5]-a[6]+a[7]-a[8] ==k);
//}
//void gen(int a[],int b[],int c){
//	if(c == 9){
//		if(check(a,c)){
//			print();
//			
//		}
//		return;
//	}
//	for(int i = 0; i <8; i++){
//		if(!b[i-1]){
//			b[i-1] = true;
//			a[c] = i;
//			gen(a,b,c+1);
//			b[i-1] = false;
//		}
//	}
//}
//int main(){
//	cin >> k;
//	gen(a,b,0);
//}
#include <iostream>
using namespace std;

int a[8];
bool b[8];
int k;

void print() {
    cout << a[0];
    for (int i = 1; i < 8; i++) {
        if (i % 2 == 1) {
            cout << " + ";
        } else {
            cout << " - ";
        }
        cout << a[i];
    }
    cout << " = " << k << endl;
}

bool check(int a[], int k) {
    return (a[0] + a[1] - a[2] + a[3] - a[4] + a[5] - a[6] + a[7] == k);
}

void gen(int a[], bool b[], int c) {
    if (c == 8) {
        if (check(a, k)) {
            print();
        }
        return;
    }

    for (int i = 1; i <= 8; i++) {
        if (!b[i - 1]) {
            b[i - 1] = true;
            a[c] = i;
            gen(a, b, c + 1);
            b[i - 1] = false;
        }
    }
}

int main() {
    cin >> k;
    gen(a, b, 0);
    return 0;
}

