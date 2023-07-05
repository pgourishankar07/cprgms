#include <iostream>
#include <string>
using namespace std;

bool map[26] = {
    false}; // creating an array of false for 26 times alll aphabets size

void removeDupli(string str, int i, string newStr) {

  if (i == str.length()) {
    cout << newStr;
    return;
  }

  if ((map[str[i] - 'a']) == true) {
    removeDupli(str, i + 1, newStr);
  } else {
    map[str[i] - 'a'] = true;
    newStr += str[i];
    removeDupli(str, i + 1, newStr);
  }
}

int main() {
  string str = "aabbccss";
  removeDupli(str, 0, "");
  return 0;
}