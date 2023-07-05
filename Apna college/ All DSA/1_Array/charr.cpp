#include <cstring>
#include <iostream>
using namespace std;
int main() {

  /*
      //___________________________
      char arr[6] = "apple";
      int n = sizeof(arr) / sizeof(arr[0]);
      cout << n << endl
           << "string is :"
           << arr;
      //____________________________
  //_____________to get input from user______
  char arr[50];
  cout << "Enter your name: " << endl;
  cin.getline(arr, 50);
  cout << endl
       << "entered details :" << arr;
  //_________________________________________

//______________PALINDROME_______________

  int n;
  cout << "enter no. of characters in that word :";
  cin >> n;

  char arr[n + 1];
  cout << "enter the word :";
  cin >> arr;

  int check = 1;

  if (n % 2 != 0) {
      for (int i = 0; i < (n / 2) - 1; i++) {
          if (arr[i] != arr[n - i - 1]) {
              cout << "not a palindrome";
              check = 0;
              break;
          }
      }
  } else {
      for (int i = 0; i <= (n / 2) - 1; i++) {
          if (arr[i] != arr[n - i - 1]) {
              cout << "not a palindrome";
              check = 0;
              break;
          }
      }
  }

  if (check == 1) {
      cout << "palindrome";
  }
  //_________________________________________
  */

  //___________________largest word in the line______________________

  int n, s;
  cout << "enter no. of characters in line :";
  cin >> n;
  cin.ignore(); // placed before getline so that no buffer takes place

  char arr[n + 1], curarr = ' ';
  cout << "enter the line :";
  cin.getline(arr, n + 1);
  // cin.ignore();

  int currlen = 0, maxlen = 0;
  for (int i = 0; i < n + 1; i++) {
    if (arr[i] == ' ' || arr[i] == '\0') {
      if (currlen > maxlen) {
        maxlen = currlen;
        s = i;
      }
      currlen = 0;
    } else {
      currlen++;
    }
  }

  cout << "the maximum length of the word is :" << maxlen << endl << s << endl;
  for (int i = s - maxlen; i < s; i++) {
    cout << "the word is :" << arr[i];
  }
  return 0;
}