#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;
    cin>>x>>y;
    if(x>y){
        cout<<0;
    }else{
        cout<<y-x+1;
    }


    return 0;
}