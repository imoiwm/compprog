#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    int res = 0, curr = 0;
    for (int i = 0; i < n; i++) {
      int temp; cin>>temp;
      if (temp == 0) {
        curr++;
        res = max(res, curr);
      } else {
        curr = 0;
      }
    }
    cout << res << '\n';
  }
  return 0;
}
