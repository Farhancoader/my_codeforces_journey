#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int curr=1;int maxa=1;
    int prev;
    cin>>prev;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        if(prev<=x){
            curr++;
            prev=x;
        }
        else curr=1,prev=x;
        
    maxa=max(maxa,curr);
    }
    cout<<maxa;
    return 0;
}