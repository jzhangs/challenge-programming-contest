// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_A

#include <iostream>
using namespace std;

static const int N = 100;

void trace(int *a, int n) {
    for (int i = 0; i < n; i++) {
        // Will recevie Presentation Error if there's extra space.
        if (i > 0) cout << ' ';
        cout << a[i];
    }
    cout << endl;
}

void insertionSort(int *a, int n) {
    for (int i = 1; i < n; i++) {
        int v = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > v) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = v;
        trace(a, n);
    }
}

int main() {
    int a[N], n;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    trace(a, n);
    insertionSort(a, n);
    return 0;
}
