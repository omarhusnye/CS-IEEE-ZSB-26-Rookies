#include <iostream>
using namespace std;

int countDigits(long long n, int k) {
    int cnt = 0;
    while (n > 0) {
        n/=k;
        cnt++;
    }
    return cnt;
}

int main() {
    long long n;
    int k;
    cin >> n >> k;

    cout << countDigits(n, k) << '\n';
    return 0;
}
