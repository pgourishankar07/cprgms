#include <iostream>
using namespace std;

void fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    cout << "factorial : " << f;
}

int main() {

    int n;
    cout << "enter a number : ";
    cin >> n;

    fact(n);
}
