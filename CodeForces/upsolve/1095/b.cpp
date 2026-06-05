#include <bits/stdc++.h>

using namespace std;

#define ll long long

int gcd(int a, int b) {
  while (a != 0 && b != 0) {
    if (a > b) {
      a %= b;
    } else if (a < b) {
      b %= a;
    } else {
      return a;
    }
  }
  if (a == 0) {
    return b;
  } else {
    return a;
  }
}

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    int res = 0;
    vector<int> arr (n);
    for (int i = 0; i < n; ++i) {
      cin>>arr[i];
    }
    for (int i = 1; i <n; ++i) {
      if (max(arr[i], arr[i - 1]) - min(arr[i], arr[i - 1]) == gcd(arr[i], arr[i - 1])) {
        res++;
      }
    }
    cout << res << '\n';
  }
  return 0;
}
