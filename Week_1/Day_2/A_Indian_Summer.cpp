#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    getchar();
    map<string,int> mp;
    int count=0;
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        if(mp[s]==0){
            mp[s]++;
            count++;
        }
    }
    cout<<count;


    return 0;
}