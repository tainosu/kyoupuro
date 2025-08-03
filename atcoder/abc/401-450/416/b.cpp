#include <bits/stdc++.h>
using namespace std;

// alias
using ll = long long;

using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vs = vector<string>;

// rep macro
#define rep(var, a, b)  for(auto var = (a); var < (b); var++)
#define rrep(var, a, b)  for(auto var = a - 1; var >= (b); var--)

int main() {
  string S; cin >> S;
  vs ans(S.length(), "o");

  rep(i, 0, S.length()) {
    if (S[i] == '#') {
      ans[i] = "#";
    }
  }

  bool flag = false;
  rep(i, 0, S.length() - 1) {
    if (ans[i] != "#") {
      flag = false;
      if (ans[i+1] == "o" && !flag) {
        ans[i+1] = ".";
      }
    } else if (ans[i] == "#") {
      flag = true;
    }
  }

  for(string a: ans) {
    cout << a;
  }
  cout << endl;
}