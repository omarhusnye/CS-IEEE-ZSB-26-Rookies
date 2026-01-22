#include <iostream>
#include <string>
using namespace std;

string buildString(int digit, int times) {
    return string(times, char('0' + digit));
}

int main() {
    int a, b;cin >> a >> b;

    string s1 = buildString(a,b);
    string s2 = buildString(b,a);

    if (s1 <= s2)
        cout << s1 << endl;
    else
        cout << s2 << endl;

    return 0;
}
