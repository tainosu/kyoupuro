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

bool func1(string str){
    int b1 = str.find('B');
    int b2 = str.rfind('B');
    if((b1 % 2) != (b2 % 2)){
        return true;
    }else{
        return false;
    }
}

bool func2(string str){
    int r1 = str.find('R');
    int r2 = str.rfind('R');
    int k = str.find('K');
    if(r1 < k && k < r2){
        return true;
    }else{
        return false;
    }
}

int main() {
    string S;   cin >> S;
    if(func1(S) && func2(S)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}