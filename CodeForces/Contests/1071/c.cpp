#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
      cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    if (arr[1] - arr[0] <= arr[0]) {
      cout << arr[0] << '\n';
    } else {
      cout << arr[1] - arr[0] << '\n';
    }
  }
  return 0;
}
