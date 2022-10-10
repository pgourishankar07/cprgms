#include <iostream>
using namespace std;

/*

int main() {
    int s, b;
    cout << "Enter minimum range : ";
    cin >> s;
    cout << "Enter maximum range : ";
    cin >> b;
    cout << "the prime numbers are : \n";
    for (int i = s; i <= b; i++) {
        int ind = 0;
        if (i != 1) {
            for (int j = 2; j < i; j++) {

                if (i % j == 0) {
                    ind = 1;
                    // cout << "not prime";
                    break;
                }
            }
            if (ind != 1) {
                cout << i << endl;
            }
        }
    }

    return 0;
}

*/

//______apna college______

bool isprime(int num) {

    for (int j = 2; j < num; j++) {
        if (num % j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int s, b;
    cout << "Enter minimum range : ";
    cin >> s;
    cout << "Enter maximum range : ";
    cin >> b;

    for (int i = s; i <= b; i++) {
        if (isprime(i) && i != 1) {
            cout << i << endl;
        }
    }
}