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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<char,int>mp;
        char zero='a';
        vector<int>charec(26);
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
                if(charec[j]==v[i]){
                    cout<<(char)(j+97);
                    charec[j]++;
                    break;
                }
            }
        }
        cout<<'\n';
    }


    return 0;
}