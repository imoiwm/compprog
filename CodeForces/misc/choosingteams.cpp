#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, k;
  cin>>n>>k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  sort(arr.begin(), arr.end());
  int res = 0;
  for (int i = 0; i < n - 2; i += 3) {
    if (arr[i] <= 5 - k && arr[i + 1] <= 5 - k && arr[i + 2] <= 5 - k) {
      res++;
    }
  }
  cout << res << '\n';
  return 0;
}
