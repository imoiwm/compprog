#include <bits/stdc++.h>
#include <numeric>

using namespace std;

#define ll long long

int main() {
  int n, l; cin>>n>>l;
  vector<double> arr (n, 0);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  sort(arr.begin(), arr.end());
  double res = 0.0;
  for (int i = 0; i < n - 1; i++) {
    double r = (arr[i] + arr[i + 1]) / 2.0;
    res = max(res, r - arr[i]);
  }
  res = max(res, (l - arr[arr.size() - 1]));
  res = max(res, arr[0]);
  cout << fixed << setprecision(10) << res << '\n';
  return 0;
}
