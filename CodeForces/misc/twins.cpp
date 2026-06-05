#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<int> arr (n, 0);
  int total = 0;
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
    total += arr[i];
  }
  int curr = 0;
  sort(arr.rbegin(), arr.rend());
  for (int i = 0; i < n; i++) {
    curr += arr[i];
    total -= arr[i];
    if (curr > total) {
      cout << i + 1 << '\n';
      break;
    }
  }
  return 0;
}

