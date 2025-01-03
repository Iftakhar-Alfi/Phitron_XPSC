#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int>v(x);
        int xoor=0;
        for(int i=0;i<x;i++){
            cin>>v[i];
            xoor ^=v[i];
        }
        int ans=xoor;
        for(int i=0;i<x;i++){
            ans = min(ans,xoor^v[i]);
            
        }
        cout<<ans<<'\n';
    }

    return 0;
}