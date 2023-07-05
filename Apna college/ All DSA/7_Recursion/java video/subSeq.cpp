#include <iostream>
#include <string>
using namespace std;

void subSeq(string str, int i, string newStr) {
  if (i == str.length()) {
    cout << newStr << endl;
    return;
  }
  subSeq(str, i + 1, newStr + str[i]);
  subSeq(str, i + 1, newStr);
}

int main() {

  subSeq("abc", 0, "");

  return 0;
}