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
        int step = (n+1)/2;
        cout<<step<<'\n';
        int first=1,last=3*n;
        for(int i=0;i<step;i++){
            cout<<first<<' '<<last<<'\n';
            first+=3;
            last-=3;
        }

    }
    


    return 0;
}