#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  int res = 0;
  vector<int> arr (n);
  for (int i = 0; i < n; ++i) {
    cin>>arr[i];
  }
  int curr = 1;
  for (int i = 1; i < n; ++i) {
    if (arr[i] > arr[i - 1]) {
      curr++;
    } else {
      res = max(curr, res);
      curr = 1;
    }
  }
  res = max(res, curr);
  cout << res << '\n';
  return 0;
}
