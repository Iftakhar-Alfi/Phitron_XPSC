#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        auto ans_a = lower_bound(v.begin(),v.end(),a);
        auto ans_b = upper_bound(v.begin(),v.end(),b);
        cout<<ans_b-ans_a<<' ';
    }
    


    return 0;
}