#include <iostream>
using namespace std;
int main() {

    int a = 5;
    int *aptr = &a;

    //    *aptr -------a ------ value of a
    //    aptr  -------&a ----- address of a

    cout << aptr << endl
         << *aptr << endl
         << a << endl
         << &a;
    return 0;
}

/*
shortcut to remember :

*ptr = &b

ptr = &b
*ptr = b

*/