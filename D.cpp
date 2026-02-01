#include <bits/stdc++.h>
#define int long long
#define SPEEDY ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

int32_t main() {
    int x; cin >> x;

    int bA = 1, bB = x;
    int bMax = x;

    for (int d = 1; d*d <= x; d++) {
        if (x%d == 0) {
            int a = d;
            int b = x/d;

            if (gcd(a,b) == 1) {
                int curMax = max(a, b);
                if (curMax < bMax) {
                    bMax = curMax;
                    bA = a;
                    bB = b;
                }
            }
        }
    }

    cout << bA << " " << bB << '\n';
    return 0;
}