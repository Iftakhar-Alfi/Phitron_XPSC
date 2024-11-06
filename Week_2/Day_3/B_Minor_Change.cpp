#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,x;
    cin>>s>>x;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=x[i]){
            count++;
        }
    }
    cout<<count;

    return 0;
}