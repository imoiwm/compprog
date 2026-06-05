#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    int count = 0;
    vector<int> arr (n);
    for (int i = 0; i < n; i++) {
      cin>>arr[i];
      if (arr[i] % 2 == 1) {
        count++;
      }
    }
    if (count % 2 == 0) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}


