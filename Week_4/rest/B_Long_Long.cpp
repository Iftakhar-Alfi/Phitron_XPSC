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
        vector<int>v(n);
        vector<int>v2(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long int sum=0;
        for(int i=0;i<n;i++){
            if(v[i] < 0){
                v2[i] = -1*v[i];
            }else{
                v2[i] = v[i];
            }
            sum+=v2[i];
        }
        int l=0,r=0,count=0;
        while(l<n){
            if(l==0){
                if(v[l]<0){
                    count++;
                    r=-1;
                }else{
                    r=1;
                }                
            }else{
                if(v[l]<0){
                    if(r>0){
                        count++;
                        r=-1;
                    }
                }else if(v[l]==0){
                    
                    r=r;
                }else{
                    r=1;
                }
            }
            l++;
        }

        cout<<sum<<" "<<count<<'\n';
    }


    return 0;
}