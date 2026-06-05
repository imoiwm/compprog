#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, t; cin>>n>>t;
  if (n == 1) {
    if (t == 10) {
      cout << -1 << '\n';
    } else {
      cout << t << '\n';
    }
  } else {
    string s = "";
    s += to_string(t);
    while (s.length() < n) {
      s += '0';
    }
    cout << s << '\n';
  }
  return 0;
}
