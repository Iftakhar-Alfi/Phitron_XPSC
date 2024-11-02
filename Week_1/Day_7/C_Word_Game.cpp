#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,m=3;
        cin>>n;
        map<string,vector<int>> mp;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }
        vector<int> ans(4);
        for(auto [x,y]:mp){
            vector<int>vec =y;
            if(vec.size()==1){
                ans[vec[0]]+=3;
            }
            if(vec.size()==2){
                ans[vec[0]]++;
                ans[vec[1]]++;
            }
        }
        for(int i=1;i<4;i++){
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
    }


    return 0;
}