#include <bits/stdc++.h>
#define int long long
#define SPEEDY ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n%2==1) cout << 0 << '\n';
        else cout << (n/4)+1 << '\n';
    }
    return 0;
}