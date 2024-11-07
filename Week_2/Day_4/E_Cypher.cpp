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
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            string s;
            cin>>s;
            for(int j=0;j<x;j++){
                if(s[j]=='D'){
                    if(ar[i]!=9){
                        ar[i]++;
                    }else{
                        ar[i]=0;
                    }
                }else if(s[j]=='U'){
                    if(ar[i]!=0){
                        ar[i]--;
                    }else{
                        ar[i]=9;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<'\n';
    }


    return 0;
}