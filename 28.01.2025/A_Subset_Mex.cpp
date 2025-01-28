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
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int sum=0;
        for(int i=0;i<=100;i++){
            if(mp[i]==0){
                sum+=i;
                break;
            }else{
                mp[i]--;
            }
        }
        for(int i=0;i<=100;i++){
            if(mp[i]==0){
                sum+=i;
                break;
            }
        }
        cout<<sum<<'\n';

    }


    return 0;
}