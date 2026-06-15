#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin>>arr[i];
    }
    int res = 0;
    int height = 0;
    for (int i = 0; i < n; ++i) {
      height = max(height, arr[i] + 1);
    }
    for (int i = 0; i < n; ++i) {
      res = max(res, height - arr[i]);
    }
    cout << res << '\n';
  }
  return 0;
}
