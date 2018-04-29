// https://onlinejudge.u-aizu.ac.jp/#/courses/lesson/1/ALDS1/2/ALDS1_2_C

#include <iostream>
using namespace std;

static const int N = 36;

struct Card { char suit; int value; };

void bubbleSort(Card a[], int n) {
  int flag = 1;

  for (int i = 0; flag; i++) {
    flag = 0;
    for (int j = n - 1; j > i; j--) {
      if (a[j].value < a[j-1].value) {
        swap(a[j], a[j-1]);
        flag = 1;
      }
    }
  }
}

void selectionSort(Card a[], int n) {
  for (int i = 0; i < n; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (a[j].value < a[min].value) {
        min = j;
      } 
    }
    if (min != i) {
      swap(a[min], a[i]);
    }
  }
}

void output(Card a[], int n) {
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << a[i].suit << a[i].value;
  }
  cout << endl;
}

bool isStable(Card a[], Card b[], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i].suit != b[i].suit) {
      return false;
    }
  }
  return true;
}

int main() {
  Card a[N], b[N];
  int n;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].suit >> a[i].value;
    b[i] = a[i];
  }

  bubbleSort(a, n);
  output(a, n);
  cout << "Stable" << endl;

  selectionSort(b, n);
  output(b, n);
  if (isStable(a, b, n)) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  return 0;
}
