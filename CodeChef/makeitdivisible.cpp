#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    if (n == 1) {
      cout << 3 << '\n';
    } else if (n == 2) {
      cout << 15 << '\n';
    } else {
      string res = "11";
      for (int i = 3; i < n; i++) {
        res += '0';
      }
      res += '1';
      cout << res << '\n';
    }
  }
  return 0;
}
