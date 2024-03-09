#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N;  cin >> N;
    vector<ll> vec(N);
    for (ll i = 0; i < N; i++) {
        cin >> vec.at(i);
    }
    for (ll i = 0; i < N - 1; i++) {
        int S, T;
        cin >> S >> T;
        vec[i+1] += T * (vec[i] / S);
    }
    cout << vec[N-1] << endl;
}
