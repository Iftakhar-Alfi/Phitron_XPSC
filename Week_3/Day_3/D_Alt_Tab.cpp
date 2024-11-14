#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string,int>mp;
    queue<string>st;
    vector<string>v;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=n-1;i>=0;i--){
        if(mp.find(v[i])==mp.end()){
            mp[v[i]]=1;
            st.push(v[i]);
        }
    }
    while(!st.empty()){
        cout<<st.front()[st.front().size()-2]<<st.front()[st.front().size()-1];
        st.pop();
    }    


    return 0;
}