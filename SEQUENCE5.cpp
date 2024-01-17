#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sequence(vector<int>& B) {
    sort(B.begin(), B.end());
    int count = 0;
    int N = B.size();
    
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int a = B[i];
            int b = B[j];
            int c = b - a;
            int current_count = 2;
            
            while (find(B.begin(), B.end(), b + (current_count - 1) * c) != B.end()) {
                ++current_count;
                if (current_count == 5) {
                    ++count;
                    break;
                }
            }
        }
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> B(n);
    for (int i = 0; i < n; ++i) {
        cin >> B[i];
    }

    int result = sequence(B);
    cout << result << endl;

    return 0;
}

