#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        if(m!=x){
            v.push_back(m);
        }
    }
    if(!v.empty()){
        for(int a:v){
            cout<<a<<" ";
        }
    }else{
       cout<<'\n';
    }
    


    return 0;
}