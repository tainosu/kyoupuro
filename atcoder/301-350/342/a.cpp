#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "";
    char target;
    int answer = 0;
    cin >> str;
    
    if (str[0] == str[1]) {
        target = str[0];
    } else if (str[1] == str[2]) {
        target = str[1];
    } else {
        target = str[0];
    }

    for (int i = 0; i < str.length(); i++) {
        if(str[i] != target) {
            answer = i + 1;
            break;
        }
    }
    cout << answer << endl;
}