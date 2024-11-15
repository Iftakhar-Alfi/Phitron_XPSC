#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        priority_queue<long long int> capacity;
        priority_queue<long long int> power_sta;
        for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            capacity.push(x);
        }
        for(int i=0;i<m;i++){
            long long int x;
            cin>>x;
            power_sta.push(x);
        }
        long long int ans=0;
        while(!capacity.empty() && !power_sta.empty()){
            long long int x=power_sta.top()*h;
            if(x > capacity.top()){
                ans+=capacity.top();
            }else{
                ans+=x;
            }
            power_sta.pop();
            capacity.pop();
        }
        cout<<ans<<'\n';
    }


    return 0;
}