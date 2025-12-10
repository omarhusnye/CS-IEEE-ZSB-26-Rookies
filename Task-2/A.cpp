#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        string s; cin >> n >> s;
        set<char> seen;
        for (char c : s) seen.insert(c);
        int total = n + (int)seen.size();
        cout << total << '\n';
    }
    return 0;
}