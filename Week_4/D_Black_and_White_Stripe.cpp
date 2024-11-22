#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int count=0,r=0,l=0;
        int ans=m;
        while(r<n){
                if(s[r]=='W'){
                count++;
            }
            if(r-l+1==m){
                ans = min(ans,count);
                if(s[l]=='W'){
                    count--;
                }
                l++;
                r++;
            }else{
                r++;
            }
        }
        cout<<ans<<'\n';
    }


    return 0;
}