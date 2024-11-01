#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int ar[26];
    for(int i=0;i<s.size();i++){
        int temp=s[i]-97;
        ar[temp]++;
    }
    bool flag=true;
    for(int i=0;i<26;i++){
        if(ar[i]==0){
            flag= false;
            char c=i+97;
            cout<<c;
            break;
        }
    }
    if(flag)cout<<"None";


    return 0;
}