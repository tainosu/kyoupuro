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
    int N, D;   cin >> N >> D;
    vi T(N);   rep(i, 0, N) cin >> T[i];
    int ans = -1;

    rep(i, 0, N-1){
        if(T[i+1] - T[i] <= D) {
            ans = T[i+1];
            break;
        }
    }

    cout << ans << endl;
}