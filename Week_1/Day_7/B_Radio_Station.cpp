#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<n;i++){
        string s;
        string t;
        cin>>s>>t;
        mp[t]=s;
        
    }
    for(int i=0;i<m;i++){
        string x,y;
        cin>>x>>y;
        y.pop_back();
        cout<<x<<" "<<y<<"; #"<<mp[y]<<'\n';
    }


    return 0;
}