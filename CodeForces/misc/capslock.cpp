#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  string s; cin>>s;
  string res = "";
  int count = 0;
  for (auto val : s) {
    if (isupper(val)) {
      count++;
    }
  }
  if (count == s.length() || (count == s.length() - 1 && !isupper(s[0]))) {
    for (auto val : s) {
      if (isupper(val)) {
        res += tolower(val);
      } else {
        res += toupper(val);
      }
    }
    cout << res << '\n';
  } else {
    cout << s << '\n';
  }
  return 0;
}
