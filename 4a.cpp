#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if((n&1)==0 && n>2)cout<<"YES" ;
    else cout<<"NO";

    return 0;
}