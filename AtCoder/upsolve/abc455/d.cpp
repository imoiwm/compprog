#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, q; cin>>n>>q;
  vector<int> stacks(n+1);
  unordered_map<int, bool> is_stack_head;
  vector<int> ontop (n+1), below (n+1);
  for (int i = 1; i <= n; ++i) {
    stacks[i] = i;
    is_stack_head[i] = true;
    ontop[i] = -1;
    below[i] = -1;
  }
  for (int t = 0; t < q; ++t) {
    int c, p; cin>>c>>p;
    if (below[c] != -1) {
      ontop[below[c]] = -1;
    }
    below[c] = p;
    ontop[p] = c;
    if (is_stack_head[c]) {
      stacks[c] = -1;
      is_stack_head[c] = false;
    }
  }
  for (int i = 1; i <= n; ++i) {
    if (stacks[i] == -1) {
      cout << 0 << ' ';
    } else {
      int idx = stacks[i];
      int res = 0;
      while (idx != -1) {
        idx = ontop[idx];
        res++;
      }
      cout << res << ' ';
    }
  }
  cout << '\n';
  return 0;
}
  
