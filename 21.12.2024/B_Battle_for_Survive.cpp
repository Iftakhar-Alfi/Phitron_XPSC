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
        int max_num=0;
        vector<int>maaxx(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        multiset<int>ml;
        for(int i=0;i<n-2;i++){
            ml.insert(v[i]);
        }
        
        long long x=v[n-2];
        for(auto it=ml.begin();it!=ml.end();it++){
            x -= *it;
        }
        cout<<(long long)(v[n-1]-x)<<'\n';
    }
    


    return 0;
}