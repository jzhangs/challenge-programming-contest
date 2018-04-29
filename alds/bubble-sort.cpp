// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A

#include <iostream>
using namespace std;

static const int N = 100;

int bubbleSort(int a[], int n) {
  int sw = 0, flag = 1, i = 0;

  for (int i = 0; flag; i++) {
    flag = 0;
    for (int j = n - 1; j > i; j--) {
      if (a[j] < a[j-1]) {
        swap(a[j], a[j-1]);
        flag = 1;
        sw++;
      }
    }
  }

  return sw;
}

int main() {
  int a[N], n;
  
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];

  int sw = bubbleSort(a, n);

  for (int i = 0; i < n; i++) {
    if (i > 0) cout << ' ';
    cout << a[i];
  }
  cout << endl << sw << endl;

  return 0;
}
