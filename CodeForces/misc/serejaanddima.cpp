#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  int a = 0, b = 0;
  int l = 0, r = n - 1;
  vector<int> arr (n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  while (l <= r) {
    if (arr[l] > arr[r]) {
      a += arr[l];
      l++;
    } else {
      a += arr[r];
      r--;
    }
    if (l > r) {
      break;
    }
    if (arr[l] > arr[r]) {
      b += arr[l];
      l++;
    } else {
      b += arr[r];
      r--;
    }
  }
  cout << a << ' ' << b << '\n';
  return 0;
}
