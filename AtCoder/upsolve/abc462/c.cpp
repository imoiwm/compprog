#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<int> arr(n+1);
  for (int i = 0; i < n; ++i) {
    int a, b; cin>>a>>b;
    arr[a] = b;
  }
  int y = 1e9;
  int res = 0;
  for (int i = 1; i <= n; ++i) {
    if (arr[i] < y) {
      res++;
      y = arr[i];
    }
  }
  cout << res << '\n';
  return 0;
}

