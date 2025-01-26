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
    int min=v[0];
    while(k--){
        int x;
        cin>>x;
         
        int l=0;
        int r=n-1;
        int ans=0;
        bool flag=false;
        while(l<=r){
            int mid= (l+r)/2;
            if(x>=v[mid]){
                flag = true;
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        if(flag)cout<<ans+1<<'\n';
        else cout<<0<<'\n';
    }

    


    return 0;
}