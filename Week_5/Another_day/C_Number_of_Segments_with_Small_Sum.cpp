// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long n,s;
//     cin>>n>>s;
//     vector<long long>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int l=0,r=0;
//     long long sum=0,ans=0;
//     while(r<n){
//         sum+=v[r];
//         if(sum<=s){
//             ans+=(r-l+1);
//         }else{
//             while(sum>s){
//                 sum-=v[l];
//                 l++;
//             }
//             if(sum<=s){
//             ans+=(r-l+1);
//             }
//         }
//         r++;    

//     }
//     cout<<ans<<'\n';
//     return 0;
// }







#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0,r=0;
    long long sum=0,ans=0;
    while(r<n){
        sum+=v[r];
        if(sum<=s){
            ans+=(r-l+1);
        }else{
            while(sum>s){
                sum-=v[l];
                l++;
            }
            if(sum<=s){
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans;


    return 0;
}