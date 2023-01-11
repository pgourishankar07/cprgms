//______BUBBLE SORT___________(2-2- elements are bieng sorted)

#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter length :";
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Unsorted list is :" << endl;

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl
       << "Sorted list is :" << endl;

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) { // at each iteration last vlaue is fixed
      if (arr[j + 1] < arr[j]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}