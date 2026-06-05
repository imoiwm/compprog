#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    string s; cin>>s;
    int total = 0;
    for (int i = 0; i < 3; i++) {
      total += s[i] - '0';
    }
    for (int i = 3; i < 6; i++) {
      total -= s[i] - '0';
    }
    if (total == 0) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
