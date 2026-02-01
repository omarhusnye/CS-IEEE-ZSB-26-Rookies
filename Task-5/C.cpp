#include <bits/stdc++.h>
#define int long long
<<<<<<< HEAD
#define SPEEDY ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << n/2 << '\n';
    }

    return 0;
}
=======
using namespace std;

int n;
int totalSum = 0;
int ans = LLONG_MAX;
vector<int> p;

void solve(int i, int currentSum) {
    if (i == n) {
        int diff = llabs(totalSum-2*currentSum);
        ans = min(ans,diff);
        return;
    }

    solve(i+1, currentSum + p[i]);
    solve(i+1, currentSum);
}

int32_t main() {
    cin >> n;
    p.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        totalSum+=p[i];
    }

    solve(0,0);
    cout << ans;

    return 0;
}
>>>>>>> 5dfa9235da44e422a31bfea7b1cb31eac7c7d8c4
