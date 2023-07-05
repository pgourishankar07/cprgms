#include <iostream>
using namespace std;

//_______find how many numbers are divisible by two given numbers____
void myincexc() {
  int s, l;
  cout << "Enter range : ";
  cin >> s >> l;
  int a;
  cout << "Enter a number :";
  cin >> a;
  int b;
  cout << "Enter another number :";
  cin >> b;
  int c1, c2, c3;
  c1 = c2 = c3 = 0;

  for (int i = s; i <= l; i++) {
    if (i % a == 0) {
      c1++;
    } else if (i % b == 0) {
      c2++;
    } else if (i % (a * b) == 0) {
      c3++;
    }
  }
  cout << "The no. of numbers which are  divisible by " << a << " or " << b
       << " are : \n"
       << (c1 + c2) - c3;
}
// __________apni kaksha methd______________

void incexxc() {
  int n, a, b;
  int c1 = n / a;
  int c2 = n / b;
  int c3 = n / (a * b);

  cout << (c1 + c2) - c3;
}

// ??_________Gretest common factor of two numbers____________

void gcd() {

  int a, b;
  cout << "Enter a number :";
  cin >> a;
  cout << "Enter another number :";
  cin >> b;
  int rem;
  while (b != 0) {
    rem = a % b;
    a = b;
    b = rem;
  }
  cout << a;
}

int main() {
  // myincexc();
  gcd();

  return 0;
}
