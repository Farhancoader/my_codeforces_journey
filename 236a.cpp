#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    unordered_set<char> l = {};
    for(char &c : s){
        l.insert(c);
    }
    if((l.size()&1)==0)cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

    return 0;
}