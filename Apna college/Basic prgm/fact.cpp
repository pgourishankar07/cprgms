#include <iostream>
using namespace std;

void fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    cout << "factorial of the given number is : " << f;
}

int main() {

    int n;
    cout << "enter a number to generate factorial  : ";
    cin >> n;

    fact(n);
}
