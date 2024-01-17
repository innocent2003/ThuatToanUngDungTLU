#include <iostream>
#include <string>
#include <cmath>
using namespace std;
char calculateCharacter(const string& W, long long N) {
    long long lengthW = W.length();
    long long lengthZ = lengthW * pow(2, ceil(log2(N + 1)));

    while (N >= lengthW) {
        if (N < lengthZ / 2) {
            N = lengthZ / 2 - 1 - N;
        } else {
            N = N - lengthZ / 2;
        }
        lengthZ /= 2;
    }

    return W[N];
}

int main() {
    string W;
    cin >> W;

    int M;
    cin >> M;

    for (int i = 0; i < M; ++i) {
        long long N;
        cin >> N;
        char result = calculateCharacter(W, N);
        cout << result << endl;
    }

    return 0;
}
