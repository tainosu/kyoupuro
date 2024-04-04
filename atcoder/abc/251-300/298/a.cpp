#include <bits/stdc++.h>
using namespace std;

// alias
using ll = long long;

using vi = vector<int>;
using vl = vector<ll>;

// rep macro
#define rep(var, a, b)  for(auto var = (a); var < (b); var++)
#define rrep(var, a, b)  for(auto var = a - 1; var >= (b); var--)

int main() {
    int N;  cin >> N;
    string S;   cin >> S;

    bool o_flag = false;
    bool x_flag = false;
    rep(i, 0, N){
        if(S[i] == 'o'){
            o_flag = true;
        }else if(S[i] == 'x'){
            x_flag = true;
        }
    }

    if(o_flag && !x_flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}