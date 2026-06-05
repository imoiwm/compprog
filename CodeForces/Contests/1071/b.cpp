#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<int> arr(n, 0);
    int total = 0;
    for (int i = 0; i < n; i++) {
      cin>>arr[i];
      if (i > 0) {
        total += abs(arr[i] - arr[i - 1]);
      }
    }
    int res = 1e9;
    res = min(res, total - abs(arr[1] - arr[0]));
    res = min(res, total - abs(arr[n - 1] - arr[n - 2]));
    for (int i = 1; i < n - 1; i++) {
      res = min(res, total - abs(arr[i] - arr[i - 1]) - abs(arr[i + 1] - arr[i]) + abs(arr[i + 1] - arr[i - 1]));
    }
    cout << res << '\n';
  }
  return 0;
}
