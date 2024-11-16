#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>v1;
    // vector<int>v2;
    map<int,int>mp1;
    map<int,int>mp2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp1[x]++;
        v1.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        mp2[x]++;
        // v2.push_back(x);
    }
    // int i=0;
    long long int ans=0;
    for(int i=0;i<n;i++){
        if(mp2.find(v1[i])==mp2.end()){
            continue;
        }
        ans += mp2[v1[i]];
    }
    cout<<ans<<'\n';

    return 0;
}