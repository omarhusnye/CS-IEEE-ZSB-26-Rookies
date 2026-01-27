#include <bits/stdc++.h>
#define int long long
using namespace std;

void alg(int n) {
    cout << n << " ";

    if (n == 1) return;
    if (n%2 == 0)
        alg(n/2);
    else
        alg(3*n+1);
}

int32_t main() {
    int num; cin >> num;
    alg(num);

    return 0;
}
