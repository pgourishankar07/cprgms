#include <iostream>
using namespace std;
//__________________Sum of n numbers using recursion_______
// int recsum(int n) {
//   if (n == 0) {
//     return 0;
//   }
//   int prevsum = recsum(n - 1);
//   return n + prevsum;
// }

// int main() {

//   int n;
//   cout << "Enter a number : ";
//   cin >> n;

//   cout << recsum(n);

//   return 0;
// }

// ____________calculate n raised to the power p(n^p)__________

// int power(int n, int p) {

//   if (p == 0) {
//     return 1;
//   }
//   int num = power(n, p - 1);
//   return n * num;
// }

// int main() {
//   int n, p;
//   cout << "Enter number : ";
//   cin >> n;
//   cout << "Enter power : ";
//   cin >> p;
//   cout << power(n, p);
//   return 0;
// }

// _______________find factorial of two numbers__________

// int fact(int n) {
//   if (n == 0) {
//     return 1;
//   }
//   int pre = fact(n - 1);
//   return n * pre;
// }

// int main() {
//   int n;
//   cout << "Enter a number : ";
//   cin >> n;

//   cout << fact(n);
//   return 0;
// }

// ____________fibonacci serries________________

int fib(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  }

  return fib(n - 1) + fib(n - 2);
}

int main() {

  int n;
  cout << "Enter range : ";
  cin >> n;

  cout << "Fibonacci Series : \n";
  for (int i = 0; i < n; i++) {
    cout << fib(i) << endl;
  }

  return 0;
}