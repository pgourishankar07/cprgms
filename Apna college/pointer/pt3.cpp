#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int *p;
    p = &a;
    int **q;
    q = &p;

    // cout << &q << endl
    //      << q << endl
    //      << p;

    cout << q << endl  //----stores add. of p
         << *q << endl //----stores value of p---that has add. of a
         << **q;       //----same as *(*q)== *(p)--value of a
    return 0;
}