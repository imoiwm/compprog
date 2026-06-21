#include <bits/stdc++.h>

using namespace std;

#define ll long long

class Compare {
  public:
    bool operator()(pair<int, int> a, pair<int, int> b) {
      if (a.first < b.first) {
        return true;
      } else if (a.first == b.first) {
        if (a.second > b.second) {
          return true;
        }
      }
      return false;
    }
};

int main() {
  int n; cin>>n;
  priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
  for (int i = 0; i < n; ++i) {
    int h, l; cin>>h>>l;
    pq.push(make_pair(h, l));
  }
  int q; cin>>q;
  vector<pair<int, int>> queries;
  for (int i = 0; i < q; ++i) {
    int curr; cin>>curr;
    queries.push_back(make_pair(curr, i));
  }
  sort(queries.begin(), queries.end());
  vector<int> res(q);
  for (int i = 0; i < q; ++i) {
    auto qc = queries[i];
    while (pq.top().second <= qc.first) {
      pq.pop();
    }
    res[qc.second] = pq.top().first;
  }
  for (auto val : res) {
    cout << val << ' ';
  }
  cout << '\n';
  return 0;
}

