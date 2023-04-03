#include <iostream>
using namespace std;
int main() {
  bool *map = new bool[6];
  for (int i = 0; i < 6; i++) {
    cout << map[i] << endl;
  }
  return 0;
}