#include <iostream>
using namespace std;
//___________________________range of prime numbers____________
void rangeofprime() {
    int n;
    cout << "Enter the range : ";
    cin >> n;

    int prime[100] = {0};

    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= n; j = j + i) {
                prime[j] = 1;
            }
        }
    }
    cout << "the prime numbers are : ";
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) {
            cout << i << " ";
        }
    }
}

//_______________________prime factorization____________

void primefactorize() {
    int n;
    cout << "enter a number to prime factorize :";
    cin >> n;

    int arr[100] = {0};

    for (int i = 2; i <= n; i++) {
        arr[i] = i;
    }

    for (int i = 2; i <= n; i++) {
        if (arr[i] == i) {
            for (int j = i * i; j <= n; j += i) {
                if (arr[j] == j) {
                    arr[j] = i;
                }
            }
        }
    }
    while (n != 1) {
        cout << arr[n] << " ";
        n = n / arr[n];
    }
}

int main() {
    // rangeofprime();
    primefactorize();

    return 0;
}