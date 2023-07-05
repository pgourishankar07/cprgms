#include <iostream>
using namespace std;

void towersOfHanoi(int n, string src, string help, string dest) {

  if (n == 1) {

    cout << "______________Disk transfer " << n << " from " << src << " to "
         << dest << endl;
    return;
  }

  towersOfHanoi(n - 1, src, dest, help);
  cout << "______________Disk transfer " << n << " from " << src << " to "
       << dest << endl;
  towersOfHanoi(n - 1, help, src, dest);
}

int main() {
  int n = 3;
  towersOfHanoi(n, "S", "H", "D");
  return 0;
}