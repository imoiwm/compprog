#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n, a, b; cin>>n>>a>>b;
    if (b >= 2 * a) {
      cout << a * n << '\n';
    } else if (n % 2 == 1) {
      cout << (n / 2) * b + a << '\n';
    } else {
      cout << (n / 2) * b << '\n';
    }
  }
  return 0;
}
