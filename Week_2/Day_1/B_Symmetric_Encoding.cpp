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
        string s,x;
        map<char,char>mp;
        
        cin>>s;
        x=s;
        bool ar[x.size()];
        sort(s.begin(),s.end());
        s.erase(unique(s.begin(),s.end()),s.end());
        // cout<<s;
        int i=0,j=s.size()-1;
        while(i<=j){
            char temp=s[i];
            mp[s[i]] =s[j];
            mp[s[j]] = temp;
            i++;
            j--;
        }
        for(i=0;i<n;i++){
            x[i] = mp[x[i]];
        }
        cout<<x<<'\n';
    }


    return 0;
}