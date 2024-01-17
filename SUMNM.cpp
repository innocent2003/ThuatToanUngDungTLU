#include <iostream>

using namespace std;

// Function to print the combination
void printCombination(int m, int n, int a[]) {
    cout << m << " = ";
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1) {
            cout << "+";
        }
    }
    cout << endl;
}

// Recursive function to generate combinations
void generateCombinations(int n, int m, int a[], int index, int current) {
    if (index == m) {
        if (current == n) {
            printCombination(n, m, a);
        }
        return;
    }

    for (int i = 1; i <= n - current; i++) {
        a[index] = i;
        generateCombinations(n, m, a, index + 1, current + i);
    }
}

int main() {
    int m, n;
    cout << "Nhap n = ";
    cin >> n;
    cout << "Nhap m = ";
    cin >> m;

    int a[10001];
    generateCombinations(n, m, a, 0, 0);

    return 0;
}
