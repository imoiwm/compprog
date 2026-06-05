#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    string res = "";
    for (int i = 0; i < 3; i++) {
      string temp; cin>>temp;
      res += temp[0];
    }
    cout << res << '\n';
  }
  return 0;
}
