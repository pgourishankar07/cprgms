#include <iostream>
using namespace std;

int guestCall(int n) {
  if (n <= 1) {
    return 1;
  }
  int way1 = guestCall(n - 1);
  int way2 = (n - 1) * guestCall(n - 2);
  return way1 + way2;
}

int main() {
  cout << guestCall(2);
  return 0;
}