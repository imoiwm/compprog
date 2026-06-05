#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  unordered_map<int, set<char>> vals;
  vals[2] = {'a','b','c'};
  vals[3] = {'d','e','f'};
  vals[4] = {'g','h','i'};
  vals[5] = {'j','k','l'};
  vals[6] = {'m','n','o'};
  vals[7] = {'p','q','r','s'};
  vals[8] = {'t','u','v'};
  vals[9] = {'w','x','y','z'};
  int n; cin>>n;
  string res = "";
  for (int i = 0; i < n; ++i) {
    string temp; cin>>temp;
    for (int j = 2; j <= 9; ++j) {
      if (vals[j].find(temp[0]) != vals[j].end()) {
        res += j + '0';
        break;
      }
    }
  }
  cout << res << '\n';
  return 0;
}
