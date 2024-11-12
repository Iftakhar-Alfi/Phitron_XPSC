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
        list<int>s1;
        list<int>s2;
        list<int>s3;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s1.push_back(x);
            s2.push_back(x);
            s3.push_back(x);
        }
        s1.sort();
        s2.sort();
        s3.sort();
            int op1;
            s1.pop_front();
            s1.pop_back();
            op1 = s1.back()-s1.front();
            int op2;
            s2.pop_front();
            s2.pop_front();
            op2 = s2.back()-s2.front();
            int op3;
            s3.pop_back();
            s3.pop_back();
            op3 = s3.back()-s3.front();

            int ans = min({op1,op2,op3});
            
            cout<<ans<<'\n';
        
    }
    


    return 0;
}