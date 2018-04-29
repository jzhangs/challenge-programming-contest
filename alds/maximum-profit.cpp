// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D

#include <iostream>
#include <algorithm>  // Not need this under c++11.
using namespace std;

int main() {
    int n;

    cin >> n;
    int *R = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) cin >> R[i];

    int maxv = R[1] - R[0];
    int minv = R[0];

    for (int i = 1; i < n; i++) {
        maxv = max(maxv, R[i] - minv);
        minv = min(minv, R[i]);
    }

    cout << maxv << endl;
    return 0;
}
