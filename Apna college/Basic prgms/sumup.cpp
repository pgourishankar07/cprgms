#include <iostream>
using namespace std;

int sumup(int n) {
  int s = 0;
  for (int i = 1; i <= n; i++) {
    s = s + i;
  }
  return s;
}

int main() {
  int n;
  cout << "enter a number : ";
  cin >> n;

  cout << sumup(n);

  return 0;
}