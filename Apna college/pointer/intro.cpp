#include <iostream>
using namespace std;

int inc(int a) {
    a++;      // local value a
    return a; // increase the value and passeed it but
} // it doesnt change the real value of a
  // so pointer concept is created
  // which is used to change the value by accessing their address
void noninc(int a) {
    a++;
}

int main() {

    int a = 5; // original value a
    cout << inc(a) << endl
         << a << endl;

    noninc(a);
    cout << a;
    return 0;
}