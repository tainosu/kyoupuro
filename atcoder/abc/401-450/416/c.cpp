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

void dfs(string current, int count, vs S, int K, vs &answer) {
  if (count == K) {
    answer.push_back(current);
    return;
  }
  for(auto s: S) {
    dfs(current + s, count + 1, S, K, answer);
  }
}

int main() {
  int N, K, X; cin >> N >> K >> X;
  vs S(N);  rep(i, 0, N) cin >> S[i];
  vs ans;
  
  dfs("", 0, S, K, ans);
  sort(ans.begin(), ans.end());
  cout << ans[X - 1] << endl;
}