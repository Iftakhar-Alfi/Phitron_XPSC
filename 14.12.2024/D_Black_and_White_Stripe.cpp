#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0,j=0;
        int count=0;
        int ans=k;
        while(j<n){
            if(s[j]=='W'){
                count++;
            }
            if(j-i+1==k){
                ans = min(ans,count);
                if(s[i]=='W'){
                    count--;
                }
                i++;
            }
            j++;
        }
        cout<<ans<<'\n';
    }
    


    return 0;
}