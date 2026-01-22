#include <iostream>
#include <iomanip>
using namespace std;

double atmTransaction(int x, double y) {
    if (x%5 == 0 && y >= x + 0.50) {
        return y - x - 0.50;
    }
    return y;
}

int main() {
    int x;
    double y;
    cin >> x >> y;

    double res = atmTransaction(x, y);

    cout << fixed << setprecision(2) << res << endl;

    return 0;
}
