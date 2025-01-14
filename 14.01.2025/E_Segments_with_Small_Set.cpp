#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long l=0,r=0;
    long long ans=0,cur=0;
    map<long long,long long>mp;
    while(r<n){
        if(mp[v[r]]==0){
            cur++;
        }
        mp[v[r]]++;
        if(cur<=k){
            ans+=(r-l+1);
        }else{
            while(cur>k){    
                mp[v[l]]--;
                if(mp[v[l]]==0){
                    cur--;
                }
                l++;
                if(cur<=k){
                    ans+=(r-l+1);
                }

            }
        }
        r++;
    }
    cout<<ans<<'\n';


    return 0;
}