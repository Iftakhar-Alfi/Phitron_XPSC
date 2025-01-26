#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    while(k--){
        int x;
        cin>>x;
        int l=0,r=n-1,ans=0,mid;
        bool flag = false;
        while(l<=r){
            mid=(r+l)/2;
            if(x<=v[mid]){
                flag = true;
                ans = mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        if(flag)cout<<ans+1 <<'\n';
        else cout<<n+1<<'\n';
    }
    


    return 0;
}