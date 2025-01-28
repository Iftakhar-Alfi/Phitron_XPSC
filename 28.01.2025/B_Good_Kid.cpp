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
        sort(v.begin(),v.end());
        long long product=1;
        for(int i=0;i<n;i++){
            if(i==0){
                product *=(v[i]+1);
            }else{
                product *= v[i];
            }
        }
        cout<<product<<'\n';
    }


    return 0;
}