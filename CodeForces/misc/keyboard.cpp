#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  char shft; cin>>shft;
  string s; cin>>s;
  string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
  if (shft == 'R') {
    for (auto val : s) {
      for (int i = 1; i < kb.length(); ++i) {
        if (kb[i] == val) {
          cout << kb[i - 1];
          break;
        }
      }
    }
  } else if (shft == 'L') {
    for (auto val : s) {
      for (int i = 0; i < kb.length() - 1; ++i) {
        if (kb[i] == val) {
          cout << kb[i + 1];
          break;
        }
      }
    }
  }
  cout << '\n';
  return 0;
}
