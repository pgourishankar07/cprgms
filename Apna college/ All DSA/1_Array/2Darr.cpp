#include <iostream>
using namespace std;
int main() {
  int r, c;
  cout << "enter number of rows :";
  cin >> r;
  cout << "enter number of columns :";
  cin >> c;
  int arr[r][c];
  // another format of declarying array______
  int arr2[2][2] = {{1, 2}, {3, 4}};

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Enter data for " << i + 1 << "th row " << j + 1 << "th column :";
      cin >> arr[i][j];
    }
  }
  cout << "the matrix is:" << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << "For searching an element :";
  int x, f;
  cin >> x;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (arr[i][j] == x) {
        f = 1;
        cout << "element found at " << i + 1 << "th row " << j + 1
             << "th column ";
      }
    }
    cout << endl;
  }
  if (f != 1) {
    cout << "elemnt not found";
  }

  return 0;
}