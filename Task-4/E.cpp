#include <bits/stdc++.h>
#define int long long
#define SPEEDY ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

string s;
vector<string> collections;
vector<bool> visited;

void string_collections(string str) {
    if (str.size() == s.size()) {
        collections.push_back(str);
        return;
    }


    for (int i = 0; i < s.size(); i++) {
        if (visited[i]) {
            continue;
        }
        if (s[i]==s[i-1]&&i>0) {
            if (!visited[i-1]) {
                continue;
            }
        }

        visited[i] = true;
        string_collections(str+s[i]);
        visited[i] = false;
    }
}

int32_t main(){

    cin >> s;
    sort(s.begin(), s.end());

    visited.resize(s.size());

    string_collections("");

    cout << collections.size() << endl;
    for (auto &s : collections)
        cout << s << endl;


    return 0;
}
