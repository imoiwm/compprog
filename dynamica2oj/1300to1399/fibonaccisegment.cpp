#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<int> arr (n);
  for (int i = 0; i < n; ++i) {
    cin>>arr[i];
  }
  if (n <= 2) {
    cout << n << '\n';
    return 0;
  }
  int res = 1;
  int curr = 2;
  for (int i = 2; i < n; ++i) {
    if (arr[i] == arr[i - 1] + arr[i - 2]) {
      curr++;
      res = max(res, curr);
    } else {
      res = max(res, curr);
      curr = 2;
    }
  }
  cout << res << '\n';
  return 0;
}
