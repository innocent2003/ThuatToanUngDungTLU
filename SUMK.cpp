#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000;
int k;
vector<vector<int>> dp(MAX, vector<int>(MAX, -1));

int f(int k, int n) {
    if (n == 1) {
        if (k == 1) return 1;
        else return 0;
    }

    if (dp[k][n] != -1)
        return dp[k][n];

    int h = k - n;

    if (h == 0)
        dp[k][n] = f(k, n - 1) + 1;
    else {
        if (h < n)
            dp[k][n] = f(k, n - 1) + f(h, h);
        else
            dp[k][n] = f(k, n - 1) + f(h, n - 1);
    }

    return dp[k][n];
}

int main() {
    cout << "Nhap k = ";
    cin >> k;

    int result = f(k, k) - 1;
    cout << "Co tat ca " << result << " cach phan tich.";

    return 0;
}

