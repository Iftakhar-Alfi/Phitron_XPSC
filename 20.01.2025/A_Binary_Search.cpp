#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    while(k--){
        int x;
        cin>>x;
        if(mp[x]){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';

        }
    }


    return 0;
}