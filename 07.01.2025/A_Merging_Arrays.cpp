// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n,m;
//     cin>>n>>m;
//     int N=n+m;
//     vector<int>v(n),v2(m),ans;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<m;i++){
//         cin>>v2[i];
//     }
//     v.push_back(INT_MAX);
//     v2.push_back(INT_MAX);
//     int l=0,r=0;
//     while(l<n || r<m){
//         if(v[l]<v2[r]){
//             ans.push_back(v[l++]);
//         }else{
//             ans.push_back(v2[r++]);
//         }
//     }
//     for(int x:ans){
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
    v1.push_back(INT_MAX);
    v2.push_back(INT_MAX);
    int i=0,j=0;
    vector<int>ans;
    while(i<n || j<m){
        
        if(v1[i]<v2[j]){
            ans.push_back(v1[i]);
            i++;
        }else if(v1[i]>v2[j]){
            ans.push_back(v2[j]);
            j++;
        }else{
            ans.push_back(v1[i]);
            ans.push_back(v2[j]);
            i++;
            j++;
        }
    }
    for(int i=0;i<n+m;i++){
        cout<<ans[i]<<' ';
    }


    return 0;
}