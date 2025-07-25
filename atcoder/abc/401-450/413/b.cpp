#include <bits/stdc++.h>
using namespace std;

// alias
using ll = long long;

using vi = vector<int>;
using vs = vector<string>;
using vvi = vector<vi>;
using vl = vector<ll>;

// rep macro
#define rep(var, a, b)  for(auto var = (a); var < (b); var++)
#define rrep(var, a, b)  for(auto var = a - 1; var >= (b); var--)

int main() {
  int N; cin >> N;
  vs S(N);
  rep(i, 0, N) {
    cin >> S[i]; 
  }

  vs ans;
  rep(i, 0, N) {
    rep(j, 0, N) {
      if (i == j) continue;
      if (find(ans.begin(), ans.end(),S[i] + S[j]) == ans.end()) {
        ans.push_back(S[i] + S[j]);
      }
    }
  }
  cout << ans.size() << endl;
}