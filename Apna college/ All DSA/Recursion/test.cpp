#include <iostream>
using namespace std;

int sumup(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumup(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    cout << "Answer is : " << sumup(n);
    return 0;
}