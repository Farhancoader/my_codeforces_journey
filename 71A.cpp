#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        int len = s.size();

        if (len <= 10) {
            cout << s << "\n";
        } else {
            cout << s.front() << len - 2 << s.back() << "\n";
        }
    }

    return 0;
}