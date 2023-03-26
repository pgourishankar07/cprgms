#include <iostream>
using namespace std;

void fibonacci(int a, int b, int n) {
  if (n == 0) {
    return;
  } else {
    int c = a + b;
    cout << a << endl;
    fibonacci(b, c, n - 1);
  }
}

int main() {
  int n;
  cout << "Ente how many series : ";
  cin >> n;
  int a = 0, b = 1;
  fibonacci(a, b, n);
  return 0;
}