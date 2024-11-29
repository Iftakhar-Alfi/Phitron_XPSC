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
        vector<long long> input(n);
        vector<long long>ans(n);
        int l=0,r=n-1;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                input[i]=l;
            }else{
                input[i] =r;
            }
            sum+=input[i];

            l++;
            r--;
        }
        vector<long long> max_vector(n);
        int max_poss=n-1;
        long long highest_value=0;
        for(int i=0;i<n;i++){
            max_vector[i] = max_poss;
            if(i<(n-1)/2){
                max_poss--;
            }else{
                if((n%2==0)&& (i==(n-1)/2)){
                    
                }else{
                    max_poss++;
                }
                
            }
            highest_value+=max_vector[i];
            
        }
        l=0;
        r=n-1;
        for(int i=0;i<n;i++){
            if(sum==highest_value){
                ans[i] = sum;
                continue;
            }
            while(max_vector[r] == input[r]){
                
                if(max_vector[r]==input[r]){
                    r--;
                }
            }
            while(max_vector[l] == input[l]){

                if(max_vector[l]==input[l]){
                    l++;
                }
                
            }
                if(input[l]<input[r]){
                    long long temp_sum = sum-input[l]+max_vector[l];
                    input[l] = max_vector[l];
                    sum = max(temp_sum,sum);
                    ans[i] = sum;
                    l++;
                    
                }else{
                    // if()
                    long long temp_sum = sum-input[r]+max_vector[r];
                    input[r] = max_vector[r];
                    sum = max(temp_sum,sum);
                    ans[i] = sum;
                    r--;
                    
                }
             
            
            
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
        // cout<<highest_value<<'\n';
    }


    return 0;
}