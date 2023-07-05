#include <iostream>
using namespace std;

// _________________Using time complexity O(n)____________

// int power(int n, int p) {
//   if (p == 1) {
//     return n;
//   } else {
//     return n * power(n, p - 1);
//   }
// }
// _________________Using time complexity O(logn)____________
int power(int n, int p) {
  if (p == 1) {
    return n;
  }
  if (p % 2 == 0) {
    return power(n, p / 2) * power(n, p / 2);
  } else {
    return power(n, p / 2) * power(n, p / 2) * n;
  }
}

int main() {
  int n, p;
  cout << "Enter number : ";
  cin >> n;
  cout << "Enter power : ";
  cin >> p;
  cout << power(n, p);
  return 0;
}