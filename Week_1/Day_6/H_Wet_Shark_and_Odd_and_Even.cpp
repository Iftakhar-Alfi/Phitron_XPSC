#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>ar(n);
    vector<long long int> prefix_sum(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    for(int i=0;i<n;i++){
        if(i==0){
            prefix_sum[i]=ar[i];
        }else{
            prefix_sum[i] = ar[i]+prefix_sum[i-1];
        }
    }
    if(prefix_sum[n-1]%2==0){
        cout<<prefix_sum[n-1];
    }else{
        for(int i=0;i<n;i++){
            if(ar[i]%2!=0){
                cout<<prefix_sum[n-1]-ar[i];
                break;
            }
        }
    }

    


    return 0;
}