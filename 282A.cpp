#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans =0;
    while(n--){
        string x;
        cin>>x;
        if(x[1]=='+')ans++;
        else if(x[1]=='-')ans--;
    }
    cout<<ans;

    return 0;
}