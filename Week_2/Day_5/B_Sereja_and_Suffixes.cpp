#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    int ar[n+1];
    int ans[n+1];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    set<int>s;
    for(int i=n;i>=1;i--){
        s.insert(ar[i]);
        ans[i]=s.size();
    }
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        cout<<ans[a]<<'\n';
    }

    return 0;
}