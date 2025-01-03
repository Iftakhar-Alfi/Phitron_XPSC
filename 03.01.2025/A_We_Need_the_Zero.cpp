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
        int xoor=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            xoor ^= v[i];
        }
        vector<int>temp;
        int check=0;
        for(int i=0;i<n;i++){
            temp.push_back(xoor^v[i]);
            check ^= temp[i];
        }
        if(check==0){
            cout<<xoor<<'\n';
        }else{
            cout<<-1<<'\n';
        }
    }
    


    return 0;
}