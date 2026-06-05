#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, k; cin>>n>>k;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  if (arr[k - 1] > 0) {
    int i = k - 1;
    while (i < arr.size()) {
      if (arr[i] != arr[k - 1]) {
        cout << i << '\n';
        return 0;
      }
      i++;
    }
    cout << n << '\n';
  } else {
    int i = 0;
    while (arr[i] > 0) {
      i++;
    }
    cout << i << '\n';
  }
  return 0;
}
