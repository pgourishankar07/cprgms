#include <iostream>
#include <string>
using namespace std;

string keypad[] = {".",   "abc",  "def", "ghi", "jkl",
                   "mno", "pqrs", "tu",  "vw",  "xyz"};

void keypattern(string str, int i, string combi) {
  if (i == str.length()) {
    cout << combi << endl;
    return;
  }

  string maped = keypad[str[i] - '0'];
  for (int j = 0; j < maped.length(); j++) {
    keypattern(str, i + 1, combi + maped[j]);
  }
}

int main() {
  keypattern("23", 0, "");
  return 0;
}