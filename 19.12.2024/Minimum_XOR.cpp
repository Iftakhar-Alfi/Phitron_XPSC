#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int primary=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            primary =(primary ^ v[i]);
        }

            int ans=primary;
            for(int i=0;i<n;i++){
                int curXor=primary^v[i];
                ans = min(ans,curXor);
            }
            cout<<ans<<'\n';
        
    }
    


    return 0;
}