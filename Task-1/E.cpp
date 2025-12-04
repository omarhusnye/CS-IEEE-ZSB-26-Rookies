#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "codeforces";
    int t; cin >> t;
    while (t--) {
        char c; cin >> c;
        bool flag = false;
        for (char ch : s) {
            if (c==ch) {
                flag = true;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}