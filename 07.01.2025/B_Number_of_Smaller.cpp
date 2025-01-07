// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     int n,m;
// //     cin>>n>>m;
// //     vector<int> v1(n);
// //     vector<int> v2(m);
// //     for(int i=0;i<n;i++){
// //         cin>>v1[i];
// //     }
// //     for(int i=0;i<m;i++){
// //         cin>>v2[i];
// //     }
// //     int i=0,j=0,count=0;
// //     while(j<m){
        
// //         if(i<n && v1[i]<v2[j]){
            
// //             count++;
// //             i++;
            
// //         }else{
// //             cout<<count<<" ";
// //             j++;
// //         }
// //     }
    


// //     return 0;
// // }




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n,m;
//     cin>>n>>m;
//     vector<int>v1(n);
//     vector<int>v2(m);
//     for(int i=0;i<n;i++){
//         cin>>v1[i];
//     }
//     for(int i=0;i<m;i++){
//         cin>>v2[i];
//     }
//     int i=0,j=0;
//     int ans=0;
//     vector<int>answer(m);
//     while(j<m){
//         if(i<n){
//             if(v1[i]<v2[j]){
//             ans++;
//             i++;
//             }else{
//                 answer[j]=ans;
//                 j++;
//             }
//         }else{
//             answer[j]=ans;
//             j++;
//         }
//     }
//     for(int x:answer){
//         cout<<x<<' ';
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>v1(n),v2(m);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    int i=0,j=0;
    vector<int>ans;
    int count=0;
    while(i<m){
        if(j>=n){
            ans.push_back(count);
            i++;
            continue;
        }
        if(v1[j] <v2[i]){
            count++;
            j++;
        }else{
            ans.push_back(count);
            i++;
        }
    }
    for(int i=0;i<m;i++){
        cout<<ans[i]<<' ';
    }


    return 0;
}