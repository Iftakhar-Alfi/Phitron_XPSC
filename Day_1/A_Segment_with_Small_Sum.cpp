#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n,s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long l=0,r=0;
    long long sum=0,ans=0;
    while(r<n){
        sum+=v[r];
        if(sum<=s){
            ans=max(ans,r-l+1);
        }else{
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<'\n';
    return 0;
} 