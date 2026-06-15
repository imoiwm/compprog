#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n, k; cin>>n>>k;
    string s; cin>>s;
    bool flag = true;
    if (n == k) {
      for (auto val : s) {
        if (val == '1') {
          flag = false;
        }
      }
      if (flag) {
        cout << "YES" << '\n';
      } else {
        cout << "NO" << '\n';
      }
    } else {
      for (int i = 0; i < k; ++i) {
        int curr = 0;
        for (int j = i; j < s.length(); j += k) {
          if (s[j] == '1') {
            curr++;
          }
        }
        if (curr % 2 == 1) {
          flag = false;
        }
      }
      if (flag) {
        cout << "YES" << '\n';
      } else {
        cout << "NO" << '\n';
      }
    }
  }
  return 0;
}
