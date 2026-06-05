#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  int q; cin>>q;
  vector<int> coin(q);
  for (int i = 0; i < q; i++) {
    cin>>coin[i];
  }
  sort(arr.begin(), arr.end());
  for (int i = 0; i < q; i++) {
    int res = 0;
    if (arr[n - 1] <= coin[i]) {
      cout << n << '\n';
      continue;
    } else if (arr[0] > coin[i]) {
      cout << 0 << '\n';
      continue;
    }
    int l = 0, r = n;
    while (l < r) {
      int mid = l + (r - l) / 2;
      if (coin[i] < arr[mid]) {
        r = mid;
      } else if (coin[i] >= arr[mid] && coin[i] >= arr[mid + 1]) {
        l = mid + 1;
      } else {
        res = mid + 1;
        l = r + 1;
      }
    }
    cout << res << '\n';
  }
  return 0;
}
