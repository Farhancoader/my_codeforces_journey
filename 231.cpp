#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        int curr=0;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            if(x==1)curr++;
        }
    if(curr>=2)ans++;
    }
    cout<<ans;
}