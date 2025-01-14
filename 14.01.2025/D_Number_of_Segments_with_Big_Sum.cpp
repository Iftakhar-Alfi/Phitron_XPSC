#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long l=0,r=0,ans=0;
    long long sum=0;
    while(r<n){
        sum+=v[r];
        if(sum>=k){
            while(sum>=k){
                ans += (n-r);
                sum-=v[l];
                l++;
            }
        }
        r++;
    }
    cout<<ans<<'\n';


    return 0;
}