#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int N=n+m;
    vector<int>v(n),v2(m),ans;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    v.push_back(INT_MAX);
    v2.push_back(INT_MAX);
    int l=0,r=0;
    while(l<n || r<m){
        if(v[l]<v2[r]){
            ans.push_back(v[l++]);
        }else{
            ans.push_back(v2[r++]);
        }
    }
    for(int x:ans){
        cout<<x<<' ';
    }

    


    return 0;
}