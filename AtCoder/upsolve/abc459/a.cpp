#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int x; cin>>x;
  string res = "";
  string hw = "HelloWorld";
  for (int i = 1; i <= hw.length(); ++i) {
    if (i != x) {
      res += hw[i - 1];
    }
  }
  cout << res << '\n';
  return 0;
}
