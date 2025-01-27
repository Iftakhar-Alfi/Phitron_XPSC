#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int n=s.size();
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    

    int odd=0;
    char tar;
    for(char i='A';i<'Z';i++){
        if(mp[i]%2!=0){
            odd++;
            tar =i;
        }
    }

    vector<char>ans(n);
    if(odd>1){
        cout<<"NO SOLUTION";
        return 0;
    }else if(odd==1){
        ans[(n-1)/2] = tar;
        mp[tar]--;
        int l=0,r=n-1;
        for(auto it = mp.begin();it!=mp.end();it++){
            while(it->second != 0){
                ans[l]=it->first;
                it->second--; l++;
                ans[r] = it->first;
                it->second--; r--;
            }
        }
    }else{
        int l=0,r=n-1;
        for(auto it = mp.begin();it!=mp.end();it++){
            while(it->second != 0){
                ans[l]=it->first;
                it->second--; l++;
                ans[r] = it->first;
                it->second--; r--;
            }
        }
    }
    for(char x:ans){
        cout<<x;
    }
    


    return 0;
}
