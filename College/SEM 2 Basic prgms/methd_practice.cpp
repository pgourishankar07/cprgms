#include <iostream>

using namespace std;

class arithmetic {
public:
  int num1, num2;
  // void getdata(){
  //     cout<<"enter a number :";
  //     cin>>num1;
  //     cout<<"enter another number :";
  //     cin>>num2;
  // };
  void sum() {
    cout << "enter a number :";
    cin >> num1;
    cout << "enter another number :";
    cin >> num2;
    cout << num1 + num2 << endl;
  };
  void sub() {
    cout << "enter a number :";
    cin >> num1;
    cout << "enter another number :";
    cin >> num2;
    cout << num1 - num2 << endl;
  };
  void multi() {
    cout << "enter a number :";
    cin >> num1;
    cout << "enter another number :";
    cin >> num2;
    cout << num1 * num2 << endl;
  };
  void divi() {
    cout << "enter a number :";
    cin >> num1;
    cout << "enter another number less than the previous  :";
    cin >> num2;
    cout << num1 / num2 << endl;
  };
};

int main() {
  arithmetic data, value;
  // data.getdata();
  value.divi();
  // cout<<5+3;

  return 0;
}