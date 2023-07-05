#include <iostream>
using namespace std;
//_______________calling by refernce_____________
void swap(int *ap,
          int *bp) { // address is passed so * is used to acces the add.
  int temp = *ap;
  *ap = *bp;
  *bp = temp;
}

int main() {

  int a = 5, b = 8;
  int *ap, *bp;
  ap = &a;
  bp = &b;

  swap(ap, bp);

  cout << "a :" << a << endl << "b :" << b;

  return 0;
}