#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  char x; cin>>x;
  bool res = false;
  for (int i = 0; i < n; ++i) {
    string s; cin>>s;
    if (s[(x - 'A')] == 'o') {
      res = true;
      break;
    }
  }
  if (res) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
  return 0;
}
