#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<int> arr (n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  int res = 1;
  int curr = 1;
  for (int i = 1; i < n; i++) {
    if (arr[i] >= arr[i - 1]) {
      curr++;
      res = max(res, curr);
    } else {
      curr = 1;
    }
  }
  cout << res << '\n';
  return 0;
}

