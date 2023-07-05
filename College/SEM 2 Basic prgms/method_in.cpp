
#include <iostream>

using namespace std;

class arithmetic {
public:
  int num1, num2;
  void sum(int num1, int num2) {
    cout << "Sum of numbers :" << num1 + num2 << endl;
  };
  void sub(int num1, int num2) {
    cout << "Subtraction of numbers:" << num1 - num2 << endl;
  };
  void multi(int num1, int num2) {
    cout << "Multiplication of numbers :" << num1 * num2 << endl;
  };
  void divi(float num1, float num2) {
    cout << "Division of numbers :" << num1 / num2 << endl;
  };
};

int main() {
  arithmetic a, b, value;
  cout << "enter a number :";
  cin >> a.num1;
  cout << "enter another number(less than given number) :";
  cin >> b.num2;
  value.sum(a.num1, b.num2);
  value.sub(a.num1, b.num2);
  value.multi(a.num1, b.num2);
  value.divi(a.num1, b.num2);

  return 0;
}