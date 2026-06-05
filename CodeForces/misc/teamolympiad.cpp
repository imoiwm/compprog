#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  stack<int> p;
  stack<int> m;
  stack<int> pe;
  for (int i = 1; i <= n; i++) {
    int temp; cin>>temp;
    if (temp == 1) {
      p.push(i);
    } else if (temp == 2) {
      m.push(i);
    } else {
      pe.push(i);
    }
  }
  vector<vector<int>> res;
  while (!p.empty() && !m.empty() && !pe.empty()) {
    int a, b, c;
    if (p.top()) {
      a = p.top();
      p.pop();
    } else {
      break;
    }
    if (m.top()) {
      b = m.top();
      m.pop();
    } else {
      break;
    }
    if (pe.top()) {
      c = pe.top();
      pe.pop();
    } else {
      break;
    }
    res.push_back(vector<int>(3));
    res[res.size() - 1][0] = a;
    res[res.size() - 1][1] = b;
    res[res.size() - 1][2] = c;
  }
  cout << res.size() << '\n';
  for (auto val : res) {
    cout << val[0] << ' ' << val[1] << ' ' << val[2] << '\n';
  }
  return 0;
}
    
