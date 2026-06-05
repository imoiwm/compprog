#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    string res = "";
    for (int i = 0; i < 8; i++) {
      string temp; cin>>temp;
      for (auto val : temp) {
        if (val != '.') {
          res += val;
        }
      }
    }
    cout << res << '\n';
  }
  return 0;
}
