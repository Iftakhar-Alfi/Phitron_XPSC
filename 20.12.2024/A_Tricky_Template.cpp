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
        string a,b,c;
        cin>>a>>b>>c;
        if(a==c || b==c){
            cout<<"NO"<<'\n';
            continue;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==c[i] || b[i]==c[i]){
                cnt++;
            }
        }
        if(cnt==n){
            cout<<"NO"<<'\n';
        }else{
            cout<<"YES"<<'\n';
        }
    }
    


    return 0;
}