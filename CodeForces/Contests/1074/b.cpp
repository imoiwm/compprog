#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<int> arr (n);
    int val = 0;
    for (int i = 0; i < n; ++i) {
      cin>>arr[i];
      val = max(val, arr[i]);
    }
    cout << val * n << '\n';
  }
  return 0;
}
