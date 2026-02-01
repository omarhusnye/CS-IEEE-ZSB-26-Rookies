#include <bits/stdc++.h>
#define int long long
#define SPEEDY ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

<<<<<<< HEAD
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
=======
string s1, s2;
int n;
int target = 0;
int good = 0, total = 0;

void dreamoon(int i, int pos) {
    if (i == n) {
        total++;
        if (pos == target)
            good++;
        return;
    }

    if (s2[i] == '+') dreamoon(i+1, pos+1);

    else if (s2[i] == '-') dreamoon(i+1, pos-1);

    else {
        dreamoon(i+1, pos+1);
        dreamoon(i+1, pos-1);
    }
}

int32_t main(){
    cin >> s1 >> s2;
    n = s1.size();

    for (char c : s1) {
        if (c == '+') target++;
        else target--;
    }

    dreamoon(0, 0);

    double prob = (double)good/total;
    cout << fixed << setprecision(12) << prob;

>>>>>>> 5dfa9235da44e422a31bfea7b1cb31eac7c7d8c4
    return 0;
}
