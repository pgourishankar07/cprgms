#include <iostream>
using namespace std;

//_________________chech a no. is powr of 2 or not________________

// int ispowerof2(int n) {
//     return (n && (!(n & n - 1)));
// }
// int main() {
//     cout << ispowerof2(8);
//     return 0;
// }

//________________find how many 1's is present in binary of the number________________

int nof1(int n) {
    int c = 0;
    while (n) {
        n = n & (n - 1);
        c++;
    }
    return c;
}
int main() {
    cout << nof1(8);
    return 0;
}