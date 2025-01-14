#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long l=0,r=0,ans=INT_MAX;
    long long sum=0;
    while(r<n){
        sum+=v[r];
        if(sum>=k){
            ans = min(ans,(r-l+1));
            while(sum>=k){
                ans = min(ans,(r-l+1));
                sum -= v[l];
                l++;                
            }
        }
        r++;
    }
    if(ans==INT_MAX){
        cout<<-1<<'\n';
    }else{
        cout<<ans<<'\n';

    }


    return 0;
}