#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;
    cin>>x>>y;
    int mx=max(x,y);
    int second = mx-1;
    if(x+y>=mx+second){
        cout<<x+y;
    }else{
        cout<<mx+second;
    }


    return 0;
}