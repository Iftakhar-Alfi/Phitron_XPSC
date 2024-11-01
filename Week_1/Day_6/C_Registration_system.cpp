#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    map<string,int> mp;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        auto it = mp.find(s);
        if(it==mp.end()){
            cout<<"OK"<<'\n';
            mp[s]=0;
        }else{
            it->second++;
            string st = to_string(it->second);
            cout<<s+st<<'\n';

        }
    }


    return 0;
}