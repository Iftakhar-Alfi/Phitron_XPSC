#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        vector<long long>prefix(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<n;i++){
            if(i==0){
                prefix[i]=v[i];
            }else{
                prefix[i]=prefix[i-1]+v[i];
            }
        }
        while(q--){
            int x;
            cin>>x;
            bool flag =false;
            int ans=0;
            int l=0,r=n-1,mid;
            while(l<=r){
                mid = (l+r)/2;
                if(prefix[mid]==x){
                    flag = true;
                    ans=mid;
                    break;
                }else if(prefix[mid]>x){
                    flag = true;
                    ans = mid;
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }
            if(flag) cout<<ans+1<<'\n';
            else cout<<-1<<'\n';
        }
    }
    


    return 0;
}