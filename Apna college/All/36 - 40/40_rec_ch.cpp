#include <iostream>
#include <string>
using namespace std;

void rev(string stri, int i) {
    if (i == 0) {
        return;
    }

    string pre = stri.substr(1); // removes 1st eeliment of the string
    rev(pre, i - 1);
    cout << pre[0];
}

int main() {
    string stri = "gouri";
    int i = stri.length();
    rev(stri, i);
    return 0;
}