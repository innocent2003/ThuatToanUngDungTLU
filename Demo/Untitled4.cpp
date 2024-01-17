//#include <iostream>
//#include <cmath>
//#include <climits>
//#include <algorithm>
//
//using namespace std;
//
//void solve(int idx, int A[], int group1[], int group2[], int& minDiff, int sum1, int sum2, int n) {
//    if (idx == n) {
//        int diff = abs(sum1 - sum2);
//        if (diff < minDiff) {
//            minDiff = diff;
//            copy(A, A + n, group1);
//            fill(group2, group2 + n, 0);
//
//            int idx2 = 0;
//            for (int i = 0; i < n; ++i) {
//                if (find(group1, group1 + n, A[i]) == group1 + n) {
//                    group2[idx2++] = A[i];
//                }
//            }
//        }
//        return;
//    }
//
//    // Thêm ph?n t? vào nhóm 1
//    group1[idx] = A[idx];
//    solve(idx + 1, A, group1, group2, minDiff, sum1 + A[idx], sum2, n);
//
//    // Thêm ph?n t? vào nhóm 2
//    group1[idx] = 0;
//    group2[idx] = A[idx];
//    solve(idx + 1, A, group1, group2, minDiff, sum1, sum2 + A[idx], n);
//    group2[idx] = 0;
//}
//
//void minDifferencePartition(int A[], int n) {
//    int group1[n], group2[n];
//    fill(group1, group1 + n, 0);
//    fill(group2, group2 + n, 0);
//
//    int minDiff = INT_MAX;
//
//    solve(0, A, group1, group2, minDiff, 0, 0, n);
//
//    cout << "Group 1: ";
//    for (int i = 0; i < n && group1[i] != 0; ++i) {
//        cout << group1[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Group 2: ";
//    for (int i = 0; i < n && group2[i] != 0; ++i) {
//        cout << group2[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Minimum difference: " << minDiff << endl;
//}
//
//int main() {
//    int A[] = {1, 2,3,4,5,8,7,7,10,20,1};
//    int n = sizeof(A) / sizeof(A[0]);
//
//    minDifferencePartition(A, n);
//
//    return 0;
//}
#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>

using namespace std;

void solve(int idx, int A[], int group1[], int group2[], int& minDiff, int sum1, int sum2, int n) {
    if (idx == n) {
        int diff = abs(sum1 - sum2);
        if (diff < minDiff) {
            minDiff = diff;
            for (int i = 0; i < n; ++i) {
                group1[i] = A[i];
                group2[i] = 0;
            }

            int idx2 = 0;
            for (int i = 0; i < n; ++i) {
                if (group1[i] == 0) {
                    group2[idx2++] = A[i];
                }
            }
        }
        return;
    }

    // Thêm ph?n t? vào nhóm 1
    group1[idx] = A[idx];
    solve(idx + 1, A, group1, group2, minDiff, sum1 + A[idx], sum2, n);

    // Thêm ph?n t? vào nhóm 2
    group1[idx] = 0;
    group2[idx] = A[idx];
    solve(idx + 1, A, group1, group2, minDiff, sum1, sum2 + A[idx], n);
    group2[idx] = 0;
}

void minDifferencePartition(int A[], int n) {
    int group1[n], group2[n];
    fill(group1, group1 + n, 0);
    fill(group2, group2 + n, 0);

    int minDiff = INT_MAX;

    solve(0, A, group1, group2, minDiff, 0, 0, n);

    cout << "Group 1: ";
    for (int i = 0; i < n && group1[i] != 0; ++i) {
        cout << group1[i] << " ";
    }
    cout << endl;

    cout << "Group 2: ";
    for (int i = 0; i < n && group2[i] != 0; ++i) {
        cout << group2[i] << " ";
    }
    cout << endl;

    cout << "Minimum difference: " << minDiff << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);

    minDifferencePartition(A, n);

    return 0;
}

