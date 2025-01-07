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
//         int r=0,count=0;
//         while(r<n){
//             if(s[r]=='B'){
//                 count++;
//                 r=r+k;
//             }else{
//                 r++;
//             }
//         }
//         cout<<count<<'\n';
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
//         int n,m;
//         cin>>n>>m;
//         string s;
//         cin>>s;
//         int i=0,j=0,count=0,ans=0;
//         while(i<n){
//             if(s[i]=='B'){
//                 count++;
//             }
//             if(i-j+1==m){
//                 if(s[j]=='B'){
//                     ans++;
//                     count=0;
//                     j=i+1;
//                 }else{
//                     j++;
//                 }
//             }
//             i++;
//         }
//         if(count!=0){
//             ans++;
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
        int i=0;
        int jump=0;
        while(i<n){
            if(s[i]=='B'){
                i+=k;
                jump++;
            }else{
                i++;
            }
        }
        cout<<jump<<'\n';

    }


    return 0;
}