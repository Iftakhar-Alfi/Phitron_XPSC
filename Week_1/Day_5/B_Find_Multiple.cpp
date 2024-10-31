#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int a,b,c;
    cin>>a>>b>>c;
    bool flag = true;

    for(int i=a;i<=b;i++){
        if(i%c==0){
            flag=false;
            cout<<i;
            break;
        }
    }
    if(flag)cout<<-1;

    return 0;
}