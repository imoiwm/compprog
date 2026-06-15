#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n, k; cin>>n>>k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int curr = 1, val = arr[n - 1];
    bool flag = false, prev = false;
    for (int i = n - 2; i >= 0; --i) {
      if (arr[i] == val) {
        curr++;
      } else {
        if (val - arr[i] > k) {
          if (curr % 2 == 0) {
            flag = true;
            break;
          }
          curr = 1;
          val = arr[i];
        } else {
          flag = true;
          break;
        }
      }
    }
    if (flag || curr % 2 == 0) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
