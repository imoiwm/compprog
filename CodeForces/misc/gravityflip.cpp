#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  sort(arr.begin(), arr.end());
  for (auto val : arr) {
    cout << val << ' ';
  }
  cout << '\n';
  return 0;
}
