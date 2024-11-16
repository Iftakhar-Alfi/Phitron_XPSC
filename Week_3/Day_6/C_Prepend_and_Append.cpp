#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        deque<char>dq;
        for(int i=0;i<n;i++){
            dq.push_back(s[i]);
        }
        while(!dq.empty()){
            if(dq.front()=='1' && dq.back()=='0'){
                dq.pop_front();
                dq.pop_back();
            }else if(dq.front()=='0' && dq.back()=='1'){
                dq.pop_front();
                dq.pop_back();
            }else{
                break;
            }
        }
        cout<<dq.size()<<'\n';
    }
    


    return 0;
}