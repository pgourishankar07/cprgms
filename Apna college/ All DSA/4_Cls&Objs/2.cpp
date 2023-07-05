#include <iostream>
using namespace std;

//    _____________Creation of class and objects__________

class student {
public:
  string name;
  int age;
  bool result;
  void display() {
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Result : " << result << endl;
  }
};

int main() {
  int n;
  cout << "Enter how many student details you want to store : ";
  cin >> n;
  student arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Entering Student " << i + 1 << " Details : \n";
    cout << "Enter Name : ";
    cin >> arr[i].name;
    cout << "Enter Age : ";
    cin >> arr[i].age;
    cout << "Enter Result : ";
    cin >> arr[i].result;
  }
  cout << "Printing Student details...\n";
  for (int i = 0; i < n; i++) {
    cout << "___________\n";
    arr[i].display();
    cout << "___________\n";
  }
  return 0;
}