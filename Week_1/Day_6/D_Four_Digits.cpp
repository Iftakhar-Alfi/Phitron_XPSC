#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string s = to_string(n);
    if(s.size()==4){
        cout<<s;
    }else if(s.size()==3){
        cout<<"0"+s;
    }else if(s.size()==2){
        cout<<"00"+s;
    }else{
        cout<<"000"+s;
    }

    return 0;
}