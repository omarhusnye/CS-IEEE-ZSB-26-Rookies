#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;
    while (n--) {
       int p,v,t; cin >> p >> v >> t;
       int sum = p+v+t;
       if (sum>1) cnt++;
    }
    cout << cnt;
}