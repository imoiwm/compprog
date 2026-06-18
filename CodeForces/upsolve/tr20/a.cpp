#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  string s; cin>>s;
  if (s == "first") {
    int n; cin>>n;
    string res = "";
    for (int i = 0; i < n; ++i) {
      int curr; cin>>curr;
      res += ('a' + curr - 1);
    }
    cout << res << '\n';
  } else if (s == "second") {
    string curr; cin>>curr;
    vector<int> res(curr.length());
    for (int i = 0; i < curr.length(); ++i) {
      res[i] = (curr[i] - 'a' + 1);
    }
    cout << res.size() << '\n';
    for (auto val : res) {
      cout << val << ' ';
    }
    cout << '\n';
  }
  return 0;
}
