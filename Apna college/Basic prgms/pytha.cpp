#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cout << "enter the 1st side : ";
  cin >> a;
  cout << "enter the 2nd side : ";
  cin >> b;
  cout << "enter the 3rd side : ";
  cin >> c;

  if (((a * a) + (b * b)) == (c * c) || ((a * a) + (c * c)) == (b * b) ||
      ((c * c) + (b * b)) == (a * a)) {
    cout << "it ia right angled triangle";
  } else {
    cout << "not a pythagarous triangle";
  }
  return 0;
}