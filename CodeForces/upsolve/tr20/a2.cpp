#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  string s; cin>>s;
  if (s == "first") {
    int n; cin>>n;
    string res = "";
    for (int i = 0; i < n; ++i) {
      string curr; cin>>curr;
      for (int j = 0; j < curr.length(); ++j) {
        if (j == curr.length() - 1) {
          res += ('a' + ((curr[j] + 10) - '0'));
        } else {
          res += ('a' + (curr[j] - '0'));
        }
      }
    }
    cout << res << '\n';
  } else if (s == "second") {
    string curr; cin>>curr;
    vector<int> res;
    int idx = 0;
    int temp = 0;
    for (int i = 0; i < curr.length(); ++i) {
      if ((curr[i] - 'a') >= 10) {
        temp *= 10;
        temp += (curr[i] - 'a' - 10);
        res.push_back(temp);
        temp = 0;
      } else {
        temp *= 10;
        temp += (curr[i] - 'a');
      }
    }
    cout << res.size() << '\n';
    for (auto val : res) {
      cout << val << ' ';
    }
    cout << '\n';
  }
  return 0;
}
