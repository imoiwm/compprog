#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<int> arr (n);
  int res = 0;
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++) {
    res += arr[n - 1] - arr[i];
  }
  cout << res << '\n';
  return 0;
}
