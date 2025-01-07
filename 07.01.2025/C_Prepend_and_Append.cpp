// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n;
// //         cin>>n;
// //         string s;
// //         cin>>s;
// //         deque<char>dq;
// //         for(int i=0;i<n;i++){
// //             dq.push_back(s[i]);
// //         }
// //         while(!dq.empty()){
// //             if(dq.front()=='1' && dq.back()=='0'){
// //                 dq.pop_front();
// //                 dq.pop_back();
// //             }else if(dq.front()=='0' && dq.back()=='1'){
// //                 dq.pop_front();
// //                 dq.pop_back();
// //             }else{
// //                 break;
// //             }
// //         }
// //         cout<<dq.size()<<'\n';
// //     }
    


// //     return 0;
// // }



// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n;
// //         cin>>n;
// //         string s;
// //         cin>>s;
// //         int i=0,j=n-1,ans=n;
// //         while(i<=j){
// //             if(s[i]==s[j]){
// //                 break;
// //             }else{
// //                 ans-=2;
// //                 i++;
// //                 j--;
// //             }
// //         }
// //         cout<<ans<<'\n';
// //     }
    


// //     return 0;
// // }




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         deque<char>dq;
//         for(char x:s){
//             dq.push_back(x);
//         }
//         int i=0,j=n-1;
//         while(1){
//             if(dq.empty()) break;
//             if((dq.front()=='1'&&dq.back()=='0')||(dq.front()=='0'&&dq.back()=='1')){
//                 dq.pop_back();
//                 dq.pop_front();
                
//             }else{
//                 break;
//             }
//         }
//         cout<<dq.size()<<'\n';
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        deque<char>dq;
        for(char x:s){
            dq.push_back(x);
        }
        
        while(1){
            if(dq.empty())break;
            if(dq[0]=='1'&& dq[dq.size()-1]=='0'){
                dq.pop_back();
                dq.pop_front();
            }else if(dq[0]=='0'&& dq[dq.size()-1]=='1'){
                dq.pop_front();
                dq.pop_back();
            }else{
                break;
            }
        }
        cout<<dq.size()<<'\n';
    }


    return 0;
}