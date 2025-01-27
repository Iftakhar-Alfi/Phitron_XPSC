#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n),prefix(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i==0){
            prefix[i]=v[i];
        }else{
            prefix[i] = prefix[i-1]+v[i];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<(lower_bound(prefix.begin(),prefix.end(),x)-prefix.begin())+1<<'\n';
    }
    


    return 0;
}