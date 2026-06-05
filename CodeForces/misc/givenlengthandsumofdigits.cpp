#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int m, s; cin>>m>>s;
  vector<int> res (m, 0);
  vector<int> rev (m, 0);
  if (s == 0 || s > m * 9) {
    if (s == 0 && m == 1) {
      cout << "0 0" << '\n';
    } else {
      cout << "-1 -1" << '\n';
    }
  } else {
    int curr = s - 1;
    res[0] = 1;
    int idx = m - 1;
    while (curr > 0) {
      if (curr >= 9) {
        res[idx] += 9;
        curr -= 9;
      } else if (curr > 0) {
        res[idx] += curr;
        curr = 0;
      } else {
        break;
      }
      idx--;
    }
    curr = s;
    for (int i = 0; i < m; i++) {
      if (curr >= 9) {
        rev[i] += 9;
        curr -= 9;
      } else if (curr > 0) {
        rev[i] += curr;
        curr = 0;
      } else {
        break;
      }
    }
    for (auto val : res) {
      cout << val;
    }
    cout << ' ';
    for (auto val : rev) {
      cout << val;
    }
    cout << '\n';
  }
  return 0;
}
