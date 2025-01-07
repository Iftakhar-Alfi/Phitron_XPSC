// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         string s;
//         cin>>s;
//         int count=0,r=0,l=0;
//         int ans=m;
//         while(r<n){
//                 if(s[r]=='W'){
//                 count++;
//             }
//             if(r-l+1==m){
//                 ans = min(ans,count);
//                 if(s[l]=='W'){
//                     count--;
//                 }
//                 l++;
//                 r++;
//             }else{
//                 r++;
//             }
//         }
//         cout<<ans<<'\n';
//     }


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         string s;
//         cin>>s;
//         int i=0,j=0;
//         int count=0;
//         int ans=k;
//         while(j<n){
//             if(s[j]=='W'){
//                 count++;
//             }
//             if(j-i+1==k){
//                 ans = min(ans,count);
//                 if(s[i]=='W'){
//                     count--;
//                 }
//                 i++;
//             }
//             j++;
//         }
//         cout<<ans<<'\n';
//     }
    


//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        int l=0,r=0;
        int count=0;
        int ans=k;
        while(r<n){
            if(s[r]=='W'){
                count++;
            }
            if(r-l+1==k){
                ans = min(ans,count);
                if(s[l]=='W'){
                    count--;
                }
                l++;
            }
            r++;
        }
        cout<<ans<<'\n';
    }


    return 0;
}