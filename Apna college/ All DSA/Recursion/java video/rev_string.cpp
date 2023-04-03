#include <iostream>
#include <string>
using namespace std;

void rev(string str, int i) {
  if (i == 0) {
    cout << str[i];
    return;
  }
  cout << str[i];
  rev(str, i - 1);
}

int main() {
  string str = "abcd";
  int len = str.length();
  rev(str, len - 1);
  return 0;
}