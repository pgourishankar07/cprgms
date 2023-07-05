// _________count number of paths in the maze________

#include <iostream>
using namespace std;

int countPaths(int i, int j, int n, int m) {
  if (i == n || j == m) {
    return 0;
  }

  if (i == n - 1 && j == m - 1) {
    return 1;
  }

  // move downwards
  int downPaths = countPaths(i + 1, j, n, m);
  // move rightwards
  int rightPaths = countPaths(i, j + 1, n, m);

  return (downPaths + rightPaths);
}

int main() {
  int out = countPaths(0, 0, 3, 3);
  cout << "The Number of Paths : " << out;
  return 0;
}

// The time complexity is O(n!)  it is calling like