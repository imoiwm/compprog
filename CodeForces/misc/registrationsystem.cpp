#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  map<string, int> m;
  int n; cin>>n;
  for (int i = 0; i < n; i++) {
    string temp; cin>>temp;
    if (!m.count(temp)) {
      cout << "OK" << '\n';
      m[temp] = 0;
    } else {
      int val = m[temp];
      val++;
      string curr = temp + to_string(val);
      cout << curr << '\n';
      m[temp] = val;
    }
  }
  return 0;
}
