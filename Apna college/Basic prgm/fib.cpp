#include <iostream>
using namespace std;

void fib(int n) {
    int n1 = 0;
    int n2 = 1;
    cout << "fibonacci series : " << endl
         << n1 << endl
         << n2 << endl;
    while ((n - 2) > 0) {
        int n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << endl;
        n--;
    }
}

int main() {
    int n;
    cout << "enter range :";
    cin >> n;

    fib(n);
    return 0;
}