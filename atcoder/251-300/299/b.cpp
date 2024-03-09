#include <bits/stdc++.h>
using namespace std;

// alias
using ll = long long;
using vi = vector<int>;

int main() {
    int N, T;   cin >> N >> T;
    vi C(N);    for(int i = 0; i < N; i++)  cin >> C[i]; 
    vi R(N);    for(int i = 0; i < N; i++)  cin >> R[i];

    int ans;
    bool containsValue = count(begin(C), end(C), T);
    if(containsValue){
        int max = 0;
        for(int i = 0; i < N; i++){
            if(C[i] == T && R[i] > max){
                max = R[i];
                ans = i + 1;
            }
        }
    }else{
        int max = 0;
        for(int i = 0; i < N; i++){
            int color = C[0];
            if(C[i] == color && R[i] > max){
                max = R[i];
                ans = i + 1;
            }
        }
    }
    cout << ans << endl;
}