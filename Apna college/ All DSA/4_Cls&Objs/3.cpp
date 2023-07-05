
// _________________Using constructor______________

#include <iostream>
using namespace std;

class employee {
public:
  string name;
  int age;
  int salary;
  void display() {
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Salary : " << salary << endl;
  }
  employee(){}; // default constructor for objects without parameters
  employee(string n, int a, int s) { // User created constructor
    name = n;
    age = a;
    salary = s;
  }
  employee(employee &a) { // Copy cosntructor by passing address of the onject
    name = a.name;
    age = a.age;
    salary = a.salary;
  }
  ~employee() { // Destructor is called automateically we dont want to call
    cout << "Destructor is called \n"; // to deallocate memory and free up space
                                       // where objects are used";
  }

  bool operator==(employee &a) {
    if (name == a.name && age == a.age &&
        salary == a.salary) { // Operator overloading
      return true;
    }
    return false;
  }
};

int main() {
  employee b; // default constructor
  employee a("Gouri", 19, 15000);
  employee c = a;
  c.display();
  a.display();
  cout << "Before calling destructor pointer was here\n";
  if (c == a) {
    cout << "Same Objects " << endl;
  } else {
    cout << "Different Objects" << endl;
  }
  return 0;
}