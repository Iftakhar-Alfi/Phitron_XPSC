#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<string,int_fast16_t>mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        auto it = mp.find(s);
        if(it == mp.end()){
            mp[s]=1;
            cout<<"NO"<<'\n';
        }else{
            cout<<"YES"<<'\n';
        }
    }


    return 0;
}