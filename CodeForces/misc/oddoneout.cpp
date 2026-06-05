#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int a, b, c; cin>>a>>b>>c;
    if (b == c) {
      cout << a << '\n';
    } else if (a == c) {
      cout << b << '\n';
    } else {
      cout << c << '\n';
    }
  }
  return 0;
}
