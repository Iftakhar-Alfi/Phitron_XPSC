// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;
//     int count=0;
//     vector<int>v(n);
//     vector<bool>check(n,false);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(!check[i] && !check[j] && v[i]!=v[j]){
//                 // count+=2;
//                 check[i]=true;
//                 check[j]=true;
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(check[i]==true){
//             count++;
//         }
//     }
//     int ans=v.size()-count;
//     cout<<ans;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(mp.find(x)==mp.end()){
            mp[x]=1;
        }else{
            mp[x]++;
        }
    }
    map<int,int>res;
    for(auto [x,y]:mp){
        res[y]=x;
    }
    auto ite = --res.end();
    cout<<ite->first;
    return 0;
}