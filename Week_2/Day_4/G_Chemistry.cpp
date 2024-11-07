#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
            }else{
                mp[s[i]]=1;
            }
        }
        int odd=0;
        for(auto [x,y]:mp){
            if(y%2!=0){
                odd++;
            }
        }
        if(odd>d){
            if((odd-d)==1)cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }else{
            cout<<"YES"<<'\n';
        }

    }
    


    return 0;
}