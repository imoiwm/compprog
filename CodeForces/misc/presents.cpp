#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<int> arr (n, 0);
  vector<int> res (n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
    res[arr[i] - 1] = i + 1;
  }
  for (int i = 0; i < n; i++) {
    cout << res[i] << ' ';
  }
  cout << '\n';
  return 0;
}
