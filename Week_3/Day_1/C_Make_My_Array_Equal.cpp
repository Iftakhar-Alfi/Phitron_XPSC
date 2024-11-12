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
        set<int>s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x!=0) s.insert(x);
        }
        if(s.size()>1) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
    


    return 0;
}