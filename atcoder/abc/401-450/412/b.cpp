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
  string A; cin >> A;
  string ans = "Yes";
  rep(i, 1, int(S.length())) {
    if (isupper(S[i])) {
      if (A.find(S[i-1]) != string::npos) {
        continue;
      } else {
        ans = "No";
        break;
      }
    }
  }
  cout << ans << endl;
}