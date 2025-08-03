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
  int N, L, R; cin >> N >> L >> R;
  string S; cin >> S;
  string ans = "Yes";
  rep(i, L - 1, R) {
    if (S[i] == 'o') {
      continue;
    } else {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
}