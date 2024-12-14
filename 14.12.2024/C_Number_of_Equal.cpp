#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    map<long long int,long long int>mp;
    map<long long int,long long int>mp2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
        
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        mp2[x]++;
    }
    long long int count=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        long long int temp = it->first;
        if(mp2.find(temp)!=mp2.end()){
            count+=(long long int)(mp[temp]*mp2[temp]);
        }else{
            continue;
        }
    }
    cout<<count<<'\n';
    


    return 0;
}