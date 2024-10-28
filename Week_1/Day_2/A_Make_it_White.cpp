#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        int first,last;
        for(int i=0;i<n;i++){
            if(st[i] == 'B'){
                first = i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(st[i]=='B'){
                last= i;
            }
        }
        int result=last-first+1;
        cout<<result<<endl; 
        
    }


    return 0;
}