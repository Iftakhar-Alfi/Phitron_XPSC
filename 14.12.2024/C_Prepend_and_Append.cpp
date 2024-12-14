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
        for(char x:s){
            dq.push_back(x);
        }
        int i=0,j=n-1;
        while(1){
            if(dq.empty()) break;
            if((dq.front()=='1'&&dq.back()=='0')||(dq.front()=='0'&&dq.back()=='1')){
                dq.pop_back();
                dq.pop_front();
                
            }else{
                break;
            }
        }
        cout<<dq.size()<<'\n';
    }


    return 0;
}