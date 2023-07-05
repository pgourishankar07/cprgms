#include <iostream>
#include <string>
using namespace std;

// _______reversing a string_________

void rev(string stri, int i) {
  if (i == 0) {
    return;
  } else {
    rev(stri.substr(1), i - 1); // substr(1) removes ist char in stri
    cout << stri[0];
  }
}

// ______replacing pi with 3.14_______

void rep(string s) {
  if (s.length() == 0) {
    return;
  } else {
    if (s[0] == 'p' && s[1] == 'i') {
      cout << "3.14";
      s = s.substr(1);
    } else {
      cout << s[0];
      rep(s.substr(1));
    }
  }
}

// _________remove duplicate________

string remdup(string s) {
  if (s.length() == 0) {
    return "";
  } else {
    string rem_str = remdup(s.substr(1));

    if (s[0] == rem_str[0]) {
      return rem_str;
    } else {
      return (s[0] + rem_str);
    }
  }
}

// ______move all x to end_______

string lax_my(string s) {
  if (s.length() == 0) {
    return "";
  } else {
    if (s[0] == 'x') {
      return lax_my(s.substr(1)) + s[0];
    } else {
      cout << s[0];
      return lax_my(s.substr(1));
    }
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

void sub(string s, string ans) {
  if (s.length() == 0) {
    cout << ans << endl;
    return;
  } else {
    sub(s.substr(1), ans);
    sub(s.substr(1), ans + s[0]);
  }
}

int main() {
  // string stri = "gouri";
  // int i = stri.length();
  // rev(stri, i);
  // cout << lax_my("ppipxpxpi");
  sub("ABC", "");

  return 0;
}