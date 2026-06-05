#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n, k; cin>>n>>k;
    vector<int> arr (n);
    for (int i = 0; i < n; i++) {
      cin>>arr[i];
    }
    if (k == 1) {
      if (is_sorted(arr.begin(), arr.end())) {
        cout << "YES" << '\n';
      } else {
        cout << "NO" << '\n';
      }
    } else {
      cout << "YES" << '\n';
    }
  }
  return 0;
}
