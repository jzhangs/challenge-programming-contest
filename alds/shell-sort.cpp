// https://onlinejudge.u-aizu.ac.jp/#/courses/lesson/1/ALDS1/2/ALDS1_2_D

#include <iostream>
#include <vector>
using namespace std;

long long cnt = 0;
vector<int> G;

void insertionSort(int A[], int n, int g) {
  for (int i = g; i < n; i++) {
    int v = A[i], j = i - g;
    while (j >= 0 & A[j] > v) {
      A[j + g] = A[j];
      j -= g;
      cnt++;
    }
    A[j + g] = v;
  }
}

void shellSort(int A[], int n) {
  for (int h = 1; h <= n; h = 3*h+1) {
    G.push_back(h);
  }

  for (int i = G.size() - 1; i >= 0; i--) {
    insertionSort(A, n, G[i]);
  }
}


int main() {
  int A[1000000], n;

  cin >> n;
  for (int i = 0; i < n; i++) cin >> A[i];
  cnt = 0;

  shellSort(A, n);

  cout << G.size() << endl;
  for (int i = G.size() - 1; i >=0; i--) {
    cout << G[i];
    if (i) cout << ' ';
  }

  cout << endl << cnt << endl;
  for (int i = 0; i < n; i++) cout << A[i] << endl;

  return 0;
}

// Got RE but no clue ..
