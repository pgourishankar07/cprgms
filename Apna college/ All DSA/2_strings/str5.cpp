#include <iostream>
using namespace std;
int main() {
    string s, s2;
    cout << "enter a string :" << endl;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        int x = s2.find(s[i]);


        if (x > s.length()) {
            int count = 0;
            for (int j = 0; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    count++;
                }
            }
            cout << "the no. of times  " << s[i] << "  occured is :" << count << endl;
        }
        s2 += s[i];
    }
    cout << s2;
    return 0;
}