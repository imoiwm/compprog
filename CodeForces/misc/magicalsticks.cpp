#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    int res = 0;
    if (n % 2 == 1) {
      cout << (n / 2) + 1 << '\n';
    } else {
      cout << n / 2 << '\n';
    }
  }
  return 0;
}
