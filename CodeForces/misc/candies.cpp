#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    ll curr = 3, a = 4;
    while (n % curr != 0) {
     curr += a;
     a *= 2;
    }
    cout << n / curr << '\n';
  }
  return 0;
}
