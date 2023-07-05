#include <iostream>
using namespace std;
int main() {
  int arr[] = {2, 3, 4, 5};
  int *arrp = arr;
  // cout << *arr << endl   //_____*arr == *arrp__________________
  //      << *arrp;

  for (int i = 0; i < 4; i++) {
    cout << *arrp << endl; //----prints value
    arrp++; //___address is appended   arr++ is illegal  so always use by
            // creating pointer
  }
  cout << *(arr + 1);
  return 0;
}