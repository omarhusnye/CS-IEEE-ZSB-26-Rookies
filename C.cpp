#include <bits/stdc++.h>
#define int long long
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
