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
        string s;
        cin>>s;
        string rev= s;
        reverse(rev.begin(),rev.end());
        int size=s.size();
        int flag=0;
        for(int i=0;i<size;i++){
            if(s[i]<rev[i]){
                flag=1;
                break;
            }else if(s[i]>rev[i]){
                flag=2;
                break;
            }else{
                continue;
            }
        }
        if(flag==1){
            cout<<s<<'\n';
        }else if(flag==2){
            cout<<rev<<s<<'\n';
        }else{
            cout<<s<<'\n';
        }

    }
    


    return 0;
}