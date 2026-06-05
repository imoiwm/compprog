#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  unordered_set<char> s;
  string temp; getline(cin, temp);
  for (auto val : temp) {
    if (val != ' ' && val != '{' && val != '}' && val != ',') {
      s.insert(val);
    }
  }
  cout << s.size() << '\n';
  return 0;
}
