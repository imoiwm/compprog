#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; ++i) {
    cin>>a[i];
  }
  for (int i = 0; i < n; ++i) {
    cin>>b[i];
  }
  for (int i = 0; i < n; ++i) {
    if (b[a[i] - 1] != i + 1) {
      cout << "No" << '\n';
      return 0;
    }
  }
  cout << "Yes" << '\n';
  return 0;
}
