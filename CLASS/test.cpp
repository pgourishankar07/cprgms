#include <cstring>
#include <iostream>
using namespace std;
int main() {
    char str1[20] = "hello";
    char str2[20] = "World";
    char str3[20];
    cout << strcpy(str1, str2) << endl;
    // cout << str1 << endl;
    // cout << str2 << endl;
    strcat(str1, str2);
    cout << str1
         << endl
         << strlen(str1);
    return 0;
}