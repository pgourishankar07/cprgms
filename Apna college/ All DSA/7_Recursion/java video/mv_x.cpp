#include <iostream>
#include <string>
using namespace std;

void moveX(string str, int i, int count, string newStr) {

  if (i == (str.length())) {
    cout << newStr;
    for (int j = 0; j < count; j++) {
      cout << "x";
    }
  }

  if (str[i] == 'x') {
    count++;
    moveX(str, i + 1, count, newStr);
  } else {
    newStr += str[i];
    moveX(str, i + 1, count, newStr);
  }
}

int main() {
  string str = "axbcxxd";
  moveX(str, 0, 0, "");
  return 0;
}