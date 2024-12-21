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
        set<int>ml;
        int count=0;
        int count_1=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0){
                count++;
            }
           
            ml.insert(x);
            
            if(x==1)count_1++;
            
        }
        int non_zero=n-count;
        if(non_zero>=(count-1)){
            cout<<0<<'\n';
            
        }else{
            if(*ml.rbegin()==0){
                cout<<1<<'\n';
                
            }else if(*ml.rbegin()==1){
                
                cout<<2<<'\n';
                
                
            }else{
                cout<<1<<'\n';
            }

        }

    }
    


    return 0;
}