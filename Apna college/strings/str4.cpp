#include <iostream>
using namespace std;
int main() {
    string s = "hii fdadaf", s2 = "";

    for (int i = 0; i < s.length(); i++) {
        int x = s2.find(s[i]);
        if (x > s.length()) {
            int count = 0;
            for (int j = 0; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    count++;
                }
            }
        }
        s2 += s[i];
    }

    return 0;
}