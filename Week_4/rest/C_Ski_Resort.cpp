#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long>fibo(1000000);
    for(int i=0;i<1000000;i++){
        if(i==0 || i==1) fibo[i]=i;
        else{
            fibo[i] = fibo[i-1]+i;
        }
    }
    int t;
    cin>>t;
    
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>consi;
        int count=0;
        for(int i=0;i<n;i++){
            if(v[i]>q){
                
                if(count!=0) consi.push_back(count);
                count = 0;
            }else{
                count++;
            }
            if(i==n-1 && count!=0){
                consi.push_back(count);
            }
        }
        long long int ans=0;
        for(int  i=0;i<consi.size();i++){
            if(consi.empty()){
                ans=0;
                break;
            }
            if(consi[i]-k+1 >=0){
                ans += fibo[consi[i]-k+1];
            }
        }
        cout<<ans<<'\n';
    }
    


    return 0;
}