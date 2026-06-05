#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  map<string, int> shapes;
  shapes["Tetrahedron"] = 4;
  shapes["Cube"] = 6;
  shapes["Octahedron"] = 8;
  shapes["Dodecahedron"] = 12;
  shapes["Icosahedron"] = 20;
  int res = 0;
  int n; cin>>n;
  for (int i = 0; i < n; i++) {
    string temp; cin>>temp;
    res += shapes[temp];
  }
  cout << res << '\n';
  return 0;
}
