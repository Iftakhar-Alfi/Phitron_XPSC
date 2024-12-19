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
        if(n%2==1){
            cout<<"NO"<<'\n';
        }else{
            cout<<"YES"<<'\n';
            char j=65;
            for(int i=0;i<n/2;i++){
                cout<<j<<j;
                j++;
            }
            cout<<'\n';
        }
    }
    


    return 0;
}