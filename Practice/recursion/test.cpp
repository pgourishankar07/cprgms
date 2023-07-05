#include <iostream>
using namespace std;
int c = 0;
int fila(int arr[], int k, int n, int i) {
  if (arr[i] == k) {
    return i;
  } else if (i == n) {
    return -1;
  } else {

    return fila(arr, k, n, i - 1);
  }
}
string lax(string s) {
  if (s.length() == 0) {
    return "";
  } else {
    string ans = lax(s.substr(1));
    if (s[0] == 'x') {
      return ans + s[0];
    } else {
      return s[0] + ans;
    }
  }
}
void dec(int n, int m) {
  if (m == n) {

    return;
  } else {
    cout << m << endl;
    dec(n, m + 1);
  }
}
void inc(int n) {
  if (n == 0) {
    return;
  } else {

    inc(n - 1);
    cout << n << endl;
  }
}
int main() {
  int arr[] = {2, 2, 3, 2, 3};
  // cout << fila(arr, 2, 5, 4);
  string s = "ABC";
  cout << s.substr(3);
  return 0;
}

/*
#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 1 || n == 0) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int fact(int n) {
    if (n == 1) {
        return n;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    // cout << fact(5);
    cout << fib(5);

    return 0;
}

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
*/