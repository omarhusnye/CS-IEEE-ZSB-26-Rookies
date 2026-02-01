#include <bits/stdc++.h>
#define int long long
#define SPEEDY ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

int32_t main() {
    const int MAXX = 1e6;
    vector<int> divCount(MAXX+1,0);

    for (int i = 1; i <= MAXX; i++) {
        for (int j = i; j <= MAXX; j += i) {
            divCount[j]++;
        }
    }

    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        cout << divCount[x] << '\n';
    }

    return 0;
}