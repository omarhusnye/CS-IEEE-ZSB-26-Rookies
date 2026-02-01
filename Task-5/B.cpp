#include <bits/stdc++.h>
#define int long long
<<<<<<< HEAD
#define SPEEDY ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int a = -1, b = -1, c = -1;
        int temp = n;

        for (int i = 2; i*i <= temp; i++) {
            if (temp%i == 0) {
                a = i;
                temp/=i;
                break;
            }
        }

        if (a == -1) {
            cout << "NO\n";
            continue;
        }

        for (int i = a+1; i*i <= temp; i++) {
            if (temp%i == 0) {
                b = i;
                temp/=i;
                break;
            }
        }

        if (b == -1 || temp < 2 || temp == a || temp == b) {
            cout << "NO\n";
        } else {
            c = temp;
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        }
    }

    return 0;
}
=======
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
>>>>>>> 5dfa9235da44e422a31bfea7b1cb31eac7c7d8c4
