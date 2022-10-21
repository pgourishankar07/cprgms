#include <iostream>
using namespace std;

class Simple {
public:
  int a;
};

int main() {
  Simple obj;
  Simple *ptr; // Pointer of class type
  ptr = &obj;
  obj.a = 5;
  cout << obj.a << endl;
  cout << ptr->a; // Accessing member with pointer
  cout << endl
       << ptr;
  return 0;
}