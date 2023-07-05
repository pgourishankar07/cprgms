#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n) {
  if (x < n && y < n && arr[x][y] == 1) {
    return true;
  } else {
    return false;
  }
}

bool ratInMaze(int **arr, int x, int y, int n, int **solu) {

  if (x == n - 1 && y == n - 1) {
    return true;
  }

  if (isSafe(arr, x, y, n)) {
    solu[x][y] = 1;
    if (ratInMaze(arr, x + 1, y, n, solu)) {
      return true;
    } else if (ratInMaze(arr, x, y + 1, n, solu)) {
      return true;
    } else { // BackTracking
      solu[x][y] = 0;
      return false;
    }
  }
  return false;
}

int main() {
  int n;
  cin >> n;

  int **arr = new int *[n]; // Dynamically allocating space for array

  for (int i = 0; i < n; i++) {
    arr[i] = new int[n]; // Dynamically allocating space for each element
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int **solu = new int *[n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      solu[i][j] = 0;
    }
  }

  if (ratInMaze(arr, 0, 0, n, solu)) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << solu[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1