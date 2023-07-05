#include <iostream>
using namespace std;

int fact(int n) {
  int f = 1;
  for (int i = 2; i <= n; i++) {
    f = f * i;
  }
  return f;
}

int main() {
  int n;
  cout << "enter a number : ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << fact(i) / (fact(j) * fact(i - j)) << " ";
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}