

// ____power_____

#include <iostream>
using namespace std;

int pow(int n, int p) {
    int c = p;
    if (c == 1) {
        return n;
    } else {
        c--;
        return n * pow(n, c);
    }
}

int main() {
    int n, p;
    cout << "Enter number : ";
    cin >> n;
    cout << "Enter power : ";
    cin >> p;
    cout << pow(n, p);

    return 0;
}