#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int h, a; cin >> h >> a;

    cout << (int)ceil((double)h / a) << '\n';

    return 0;
}