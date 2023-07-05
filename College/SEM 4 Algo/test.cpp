#include <cmath>
#include <iostream>
using namespace std;

void primeFactors(int n) {
  while (n % 2 == 0) {
    cout << 2 << " ";
    n /= 2;
  }
  for (int i = 3; i <= sqrt(n); i += 2) {
    while (n % i == 0) {
      cout << i << " ";
      n /= i;
    }
  }
  if (n > 2) {
    cout << n << " ";
  }
}

int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << "Prime factors of " << n << " are: ";
  primeFactors(n);
  cout << sqrt(49) << endl;
  cout << 5 % 1;
  return 0;
}
