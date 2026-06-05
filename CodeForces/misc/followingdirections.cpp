#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    string s; cin>>s;
    int x = 0, y = 0;
    bool flag = false;
    for (auto val : s) {
      if (val == 'L') {
        x--;
      } else if (val == 'R') {
        x++;
      } else if (val == 'U') {
        y++;
      } else {
        y--;
      }
      if (x == 1 && y == 1) {
        flag = true;
      }
    }
    if (flag) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
