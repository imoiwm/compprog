#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<int> arr (n);
    for (int i = 0; i < n; i++) {
      cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    bool flag = true;
    for (int i = 1; i < n; i++) {
      if (arr[i] - arr[i - 1] > 1) {
        cout << "NO" << '\n';
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "YES" << '\n';
    }
  }
  return 0;
}

