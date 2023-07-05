#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int scanNum(char ch) {
  int value;
  value = ch;
  return (value - '0'); // return float from character
}

int operation(int a, int b, char op) {
  if (op == '+')
    return b + a;
  else if (op == '-')
    return b - a;
  else if (op == '*')
    return b * a;
  else if (op == '/')
    return b / a;
  else if (op == '^')
    return pow(b, a); // find b^a
  else
    return -1;
}

int postfixEval(string pos) {
  int a, b;
  stack<int> stk;
  for (int i = 0; i < pos.length(); i++) {
    char c = pos[i];
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
      a = stk.top();
      stk.pop();
      b = stk.top();
      stk.pop();
      stk.push(operation(a, b, c));
    } else if (c >= '0' && c <= '9') {
      stk.push(scanNum(c));
    }
  }
  return stk.top();
}

int main() {
  string pos = "21+3*";
  cout << postfixEval(pos);
}
