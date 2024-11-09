#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    multiset<int> ml;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ml.insert(x);
    }
    int day=1,ans=0;
    while(!ml.empty()){
        auto LB=ml.lower_bound(day);
        if(LB!=ml.end()){
            ans++;
            ml.erase(LB);
        }else{
            break;
        }
        day++;
    }
    cout<<ans;
    


    return 0;
}