#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c<4){
        int rem=4-(a+b+c);
        if((a+rem)>c){
            cout<<"Yes"<<'\n';
        }else{
            cout<<"No"<<'\n';
        }
    }else{
        if(a>c){
            cout<<"Yes"<<'\n';
        }else{
            cout<<"No"<<'\n';
        }
    }
    


    return 0;
}