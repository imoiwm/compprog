#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    string s; cin>>s;
    string comp = "yes";
    bool flag = true;
    for (int i = 0; i < s.length(); i++) {
      if (tolower(s[i]) != comp[i]) {
        cout << "NO" << '\n';
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "YES" << '\n';
    }
  }
  return 0;
}
