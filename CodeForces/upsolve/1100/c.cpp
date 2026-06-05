#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<int> arr(n+1, 0);
    vector<int> res;
    for (int i = 0; i < n; ++i) {
      cin>>arr[i];
    }
    bool pos = arr[0] > 0;
    int curr = 1;
    for (int i = 1; i <= n; ++i) {
      if (arr[i] > 0) {
        if (!pos) {
          res.push_back(curr);
          pos = true;
        }
      } else {
        if (pos) {
          res.push_back(curr);
          pos = false;
        }
      }
      curr = i + 1;
    }
    cout << res.size() << '\n';
    if (res.size() > 0) {
      for (int i = res.size() - 1; i >= 0; --i) {
        cout << res[i] << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}
