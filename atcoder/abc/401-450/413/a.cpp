#include <bits/stdc++.h>
using namespace std;

// alias
using ll = long long;

using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;

// rep macro
#define rep(var, a, b)  for(auto var = (a); var < (b); var++)
#define rrep(var, a, b)  for(auto var = a - 1; var >= (b); var--)

int main() {
  int N, M; cin >> N >> M;
  int sum = 0;
  rep(_, 0, N) {
    int a; cin >> a;
    sum += a;
  }
  
  if (sum <= M) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}