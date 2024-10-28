#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    deque<int> dp(n);
    for(int i=0;i<n;i++){
        cin>>dp[i];
    }
    int sere=0,dima=0;
    for(int i=0;i<n;i++){
        auto l =dp.front();
        auto r = dp.back();
        if(i%2==0){
            if(l>r){
                sere+=l;
                dp.pop_front();
            }else{
                sere+=r;
                dp.pop_back();
            }
        }else{
            if(l>r){
            dima+=l;
            dp.pop_front();
        }else{
            dima+=r;
            dp.pop_back();
        }
        }

    }
    cout<<sere<<" "<<dima;


    return 0;
}