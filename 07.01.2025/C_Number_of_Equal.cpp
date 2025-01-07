// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     int n,m;
// //     cin>>n>>m;
// //     vector<int>v1;
// //     // vector<int>v2;
// //     map<int,int>mp1;
// //     map<int,int>mp2;
// //     for(int i=0;i<n;i++){
// //         int x;
// //         cin>>x;
// //         mp1[x]++;
// //         v1.push_back(x);
// //     }
// //     for(int i=0;i<m;i++){
// //         int x;
// //         cin>>x;
// //         mp2[x]++;
// //         // v2.push_back(x);
// //     }
// //     // int i=0;
// //     long long int ans=0;
// //     for(int i=0;i<n;i++){
// //         if(mp2.find(v1[i])==mp2.end()){
// //             continue;
// //         }
// //         ans += mp2[v1[i]];
// //     }
// //     cout<<ans<<'\n';

// //     return 0;
// // }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n,m;
//     cin>>n>>m;
//     map<long long int,long long int>mp;
//     map<long long int,long long int>mp2;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         mp[x]++;
        
//     }
//     for(int i=0;i<m;i++){
//         int x;
//         cin>>x;
//         mp2[x]++;
//     }
//     long long int count=0;
//     for(auto it=mp.begin();it!=mp.end();it++){
//         long long int temp = it->first;
//         if(mp2.find(temp)!=mp2.end()){
//             count+=(long long int)(mp[temp]*mp2[temp]);
//         }else{
//             continue;
//         }
//     }
//     cout<<count<<'\n';
    


//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x,y;
    cin>>x>>y;
    vector<long long>v(x),a(y);
    map<long long ,long long>mp1,mp2;
    for(int i=0;i<x;i++){
        cin>>v[i];
        mp1[v[i]]++;
    }
    for(int i=0;i<y;i++){
        cin>>a[i];
        mp2[a[i]]++;
    }
    long long count=0;
    for(auto i=mp1.begin();i!=mp1.end();i++){
        count+= (mp1[i->first] * mp2[i->first]);
    }
    cout<<count<<'\n';
    return 0;
}