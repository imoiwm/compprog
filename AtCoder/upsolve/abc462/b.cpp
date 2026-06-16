#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<vector<int>> gifts(n+1, vector<int>());
  for (int i = 1; i <= n; ++i) {
    int k; cin>>k;
    for (int j = 0; j < k; ++j) {
      int curr; cin>>curr;
      gifts[curr].push_back(i);
    }
  }
  for (int i = 1; i <= n; ++i) {
    cout << gifts[i].size() << ' ';
    for (auto val : gifts[i]) {
      cout << val << ' ';
    }
    cout << '\n';
  }
  return 0;
}

