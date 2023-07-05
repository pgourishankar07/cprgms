#include <cmath>
#include <iostream>
using namespace std;

// void euclidsAlgo(int n1, int n2) {
//   int m = n1, n = n2;
//   while (n != 0) {
//     int temp = n;
//     n = m % n;
//     m = temp;
//   }
//   cout << "GCD : " << m << endl;
// }
// //
// ______________________________________________________________________________
// int min(int n1, int n2) {
//   if (n1 < n2) {
//     return n1;
//   }
//   return n2;
// }

// int consIntCheck(int n1, int n2) {
//   int m = n1, n = n2;
//   int t = min(m, n);
//   if (m % t == 0 && n % t == 0) {
//     return t;
//   } else {
//     t--;
//   }
// }
// ______________________________________________________________________________
int primeFactorsCount(int n) {
  int count = 0;
  while (n % 2 == 0) {
    count++;
    n /= 2;
  }
  for (int i = 3; i <= sqrt(n); i += 2) {
    while (n % i == 0) {
      count++;
      n /= i;
    }
  }
  if (n > 2) {
    count++;
  }
  return count;
}
void primeFactors(int arr[], int n) {
  int x = 0;
  while (n % 2 == 0) {
    arr[x] = 2;
    x++;
    n /= 2;
  }
  for (int i = 3; i <= sqrt(n); i += 2) {
    while (n % i == 0) {
      arr[x] = i;
      x++;
      n /= i;
    }
  }
  if (n > 2) {
    arr[x] = n;
  }
}

void midSchoolAlgo(int n1, int n2) {
  int m = n1, n = n2;
  int arr1size = primeFactorsCount(m);
  int arr2size = primeFactorsCount(n);
  int arr1[arr1size], arr2[arr2size];
  primeFactors(arr1, m);
  primeFactors(arr2, n);
  int ans = 1;
  for (int i = 0; i < arr1size; i++) {
    for (int j = 0; j < arr2size; j++) {
      if (arr1[i] == arr2[j]) {
        ans *= arr2[j];
        i++;
      }
    }
  }
  cout << "GCD: : " << ans;
}
int main() {
  int n1, n2;
  cout << "Enter a number : ";
  cin >> n1;
  cout << "Enter another number : ";
  cin >> n2;

  //   euclidsAlgo(n1, n2);

  //   cout << "GCD : " << consIntCheck(n1, n2);

  midSchoolAlgo(n1, n2);

  return 0;
}