#include <iostream>
#include <vector>
using namespace std;

bool canDecrease(const vector<int>& r, int i) {

    return (r[i] > r[i-1] + 1 && r[i] > r[i+1] + 1);

}

int main() {
    int n, k; cin >> n >> k;

    vector<int> r(2*n+1);
    for (int i = 0; i < 2*n+1; i++) cin >> r[i];


    vector<int> y = r;
    int used = 0;

    for (int i = 1; i < 2*n && used < k; i += 2) {
        if (canDecrease(r, i)) {
            y[i]--;
            used++;
        }
    }

    for (int i = 0; i < 2 * n + 1; i++) cout << y[i] << " ";


    return 0;
}
