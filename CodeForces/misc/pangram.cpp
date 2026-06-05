#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  unordered_set<char> s;
  for (int i = 0; i < n; i++) {
    char temp; cin>>temp;
    s.insert(tolower(temp));
  }
  if (s.size() == 26) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
  return 0;
}
