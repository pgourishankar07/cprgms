#include <iostream>
using namespace std;

int placeTiles(int n, int m) {
  if (n == m) {
    return 2;
  }
  if (n < m) {
    return 1;
  }
  int verti = placeTiles(n - m, m);
  int hori = placeTiles(n - 1, m);
  return verti + hori;
}

int main() {
  cout << placeTiles(4, 2);
  return 0;
}