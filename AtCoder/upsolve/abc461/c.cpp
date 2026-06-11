#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  priority_queue<pair<int, int>> gems;
  int n, k, m; cin>>n>>k>>m;
  for (int i = 0; i < n; ++i) {
    int c, v; cin>>c>>v;
    gems.push(make_pair(v, c));
  }
  unordered_set<int> seen;
  priority_queue<pair<int, int>> backup;
  long long res = 0;
  int count = 0;
  while (count < k) {
    pair<int, int> curr = {0, 0};
    if (gems.size() > 0) {
      curr = gems.top();
    }
    if (seen.size() >= m) {
      if (backup.size() > 0 && backup.top().first >= curr.first) {
        res += backup.top().first;
        count++;
        backup.pop();
      } else {
        res += curr.first;
        count++;
        gems.pop();
      }
    } else {
      if (seen.find(curr.second) == seen.end()) {
        res += curr.first;
        count++;
        seen.insert(curr.second);
      } else {
        backup.push(curr);
      }
      gems.pop();
    }
  }
  cout << res << '\n';
  return 0;
}
