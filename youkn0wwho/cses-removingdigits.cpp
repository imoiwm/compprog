#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<int> memo(n+1, 1e9);
  memo[n] = 0;
  for (int i = n - 1; i >= 0; --i) {
    for(int j = 1; j <= 9; ++j) {
      if (i + j <= n) {
        int temp = i + j;
        string curr = to_string(temp);
        for (auto c : curr) {
          if ((j + '0') == c) {
            memo[i] = min(memo[i], memo[i + j] + 1);
          }
        }
      }
    }
  }
  cout << memo[0] << '\n';
  return 0;
}

