// https://onlinejudge.u-aizu.ac.jp/#/courses/lesson/1/ALDS1/2/ALDS1_2_B

#include <iostream>
using namespace std;

static const int N = 100;

int selectionSort(int a[], int n) {
    int sw = 0;

    for (int i = 0; i < n; i++) {
        int min = i, j;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(a[min], a[i]);
            sw++;
        }
    }
    return sw;
}

int main() {
    int a[N], n;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int sw = selectionSort(a, n);

    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ' ';
        cout << a[i];
    }
    cout << endl << sw << endl;

    return 0;
}
