#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    long long unsigned n; cin>>n;
    if (n == 10) {
      cout << -1 << '\n';
    } else {
      long long unsigned a, b;
      for (long long unsigned i = 0; i <= 11; ++i) {
        long long unsigned temp = n - i;
        if (temp % 12 == 0) {
          b = temp;
          a = i;
          break;
        }
      }
      if (a == 10 && b >= 12) {
        b -= 12;
        a += 12;
      }
      cout << a << ' ' << b << '\n';
    }
  }
  return 0;
}

