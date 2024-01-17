


#include<iostream>
using namespace std;
const int MAX=100;
int n, s, a[MAX], b[MAX];
bool DieuKien(int D) {
	for (int i=2;i<D;i++) {
		if (a[i]>a[i-1]) {
			return false;
		}
	}
	return true;
}
void print(int D) {
	if (DieuKien(D)) {
		cout<< n << " = ";
		for (int i=1;i<D-1;i++) {
			cout<<a[i]<<"+";
		}
		cout <<a[D-1]<<endl;
	}
}
int sum(int D) {
	s=0;
	for(int j=0;j<D;j++) {
		s=s+a[j];
	}
	return s;
}
void sinh(int D) {
	if (sum(D)==n) {
		print(D);
		return;
	}
	for (int i =n-1;i>0;i--) {
		if (sum(D)+i<=n) {
			a[D]=i;
			sinh(D+1);
		}
	}
}
int main() {
	cout<< "Nhap n = ";
	cin>>n;
	cout<<n<<" = "<<n<<endl;
	a[0]=0;
	sinh(1);
}



