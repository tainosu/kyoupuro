#include <bits/stdc++.h>
using namespace std;

// alias
using ll = long long;
using vi = vector<int>;

int main() {
    int N;  cin >> N;
    string S;   cin >> S;
    int t_cnt, a_cnt;
    t_cnt = a_cnt = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'T') {
            t_cnt++;
        } else {
            a_cnt++;
        }
    }
    char ans;
    if (t_cnt > a_cnt)  ans = 'T';
    else if (t_cnt < a_cnt) ans = 'A';
    else {
        if (S.at(S.size() - 1) == 'T')  ans = 'A';
        else    ans = 'T';
    }
    cout << ans << endl;
}