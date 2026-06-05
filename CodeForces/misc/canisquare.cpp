#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    ll unsigned total = 0;
    for (int i = 0; i < n; ++i) {
      int temp; cin>>temp;
      total += temp;
    }
    ll unsigned curr = sqrt(total);
    if (curr * curr == total) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
