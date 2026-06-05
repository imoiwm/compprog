#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int a, b, c, n; cin>>a>>b>>c>>n;
    int x = max(a, max(b, c));
    int temp = x - a;
    a += temp;
    n -= temp;
    temp = x - b;
    b += temp;
    n -= temp;
    temp = x - c;
    c += temp;
    n -= temp;
    if (n % 3 == 0 && n >= 0) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
