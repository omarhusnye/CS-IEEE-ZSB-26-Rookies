#include <bits/stdc++.h>
<<<<<<< HEAD
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
=======
using namespace std;

int fact(int n) {
    if (n==0)
        return 1;
    return n*fact(n-1);
}

int main() {
    int num; cin >> num;
    cout << fact(num) << '\n';
>>>>>>> 5dfa9235da44e422a31bfea7b1cb31eac7c7d8c4

    return 0;
}
