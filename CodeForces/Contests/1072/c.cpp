#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n, k; cin>>n>>k;
    queue<pair<int, int>> q;
    unordered_set<int> seen;
    q.push(make_pair(n, 0));
    int res = -1;
    while (q.size()) {
      auto temp = q.front();
      q.pop();
      if (!seen.count(temp.first)) {
      if (temp.first == k) {
        res = temp.second;
        break;
      }
      if (temp.first != 1) {
        q.push(make_pair(temp.first / 2, temp.second + 1));
        if (temp.first % 2 == 0) {
          q.push(make_pair(temp.first / 2, temp.second + 1));
        } else {
          q.push(make_pair((temp.first / 2) + 1, temp.second + 1));
        }
      }
      seen.insert(temp.first);
      }
    }
    cout << res << '\n';
  }
  return 0;
}
