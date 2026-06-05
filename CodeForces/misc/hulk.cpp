#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  string res = "I hate";
  for (int i = 2; i <= n; i++) {
    if (i % 2 == 0) {
      res += " that I love";
    } else {
      res += " that I hate";
    }
  }
  res += " it";
  cout << res << '\n';
  return 0;
}

