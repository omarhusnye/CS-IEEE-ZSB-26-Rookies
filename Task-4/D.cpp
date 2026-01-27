#include <bits/stdc++.h>
#define int long long
#define SPEEDY ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

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

    return 0;
}
