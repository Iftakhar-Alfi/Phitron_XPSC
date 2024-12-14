#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    int i=0,j=0;
    int ans=0;
    vector<int>answer(m);
    while(j<m){
        if(i<n){
            if(v1[i]<v2[j]){
            ans++;
            i++;
            }else{
                answer[j]=ans;
                j++;
            }
        }else{
            answer[j]=ans;
            j++;
        }
    }
    for(int x:answer){
        cout<<x<<' ';
    }

    return 0;
}