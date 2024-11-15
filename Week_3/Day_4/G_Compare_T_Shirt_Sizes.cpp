#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        char last_of_a=a.back();
        char last_of_b=b.back();
    

        if(last_of_a == last_of_b){
            if(a.size()==b.size()){
                cout<<'='<<'\n';
            }else if(a.size()>b.size()){
                if(last_of_a=='S'){
                    cout<<'<'<<'\n';
                }else{
                    cout<<'>'<<'\n';
                }
            }else{
                if(last_of_a=='S'){
                    cout<<'>'<<'\n';
                }else{
                    cout<<'<'<<'\n';
                }
            }
        }else if(last_of_a=='L'){
            cout<<'>'<<'\n';
        }else if(last_of_a=='S'){
            cout<<'<'<<'\n';
        }else{
            if(last_of_b=='L'){
                cout<<'<'<<'\n';
            }else{
                cout<<'>'<<'\n';
            }
        }
    }
    


    return 0;
}