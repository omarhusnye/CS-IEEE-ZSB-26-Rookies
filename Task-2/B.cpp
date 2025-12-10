#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin >> s;

    bool allUpper = true;
    bool allUpperExceptFirst = true;

    for (int i = 0; i < s.size(); i++)
        if (!isupper(s[i]))
            allUpper = false;

    for (int i = 1; i < s.size(); i++)
        if (!isupper(s[i]))
            allUpperExceptFirst = false;

    if (allUpper || allUpperExceptFirst) {
        for (char &c : s) {
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }

    cout << s;
    return 0;
}
