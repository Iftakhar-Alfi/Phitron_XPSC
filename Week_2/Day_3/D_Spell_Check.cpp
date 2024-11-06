#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        if(n!=5){
            cout<<"NO"<<'\n';
            continue;
        }else{
            map<char,int>mp;
            for(int i=0;i<5;i++){
                mp[s[i]]=1;
            }
            if(mp.find('T')== mp.end()||mp.find('i')== mp.end()||mp.find('m')== mp.end()||mp.find('u')== mp.end()||mp.find('r')== mp.end()){
                cout<<"NO"<<'\n';
            }else{
                cout<<"YES"<<'\n';
            }
        }
    }
    


    return 0;
}