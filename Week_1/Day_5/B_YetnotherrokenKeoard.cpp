#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string s,ans;
        cin>>s;
        reverse(s.begin(),s.end());
        int low=0,cap=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                low++;
            }
            if(s[i]=='B'){
                cap++;
            }
            if(s[i]!='b' && s[i]!='B'){
                if(low>0 && islower(s[i])){
                    low--;
                    continue;
                }
                if(cap>0 && isupper(s[i])){
                    cap--;
                    continue;
                }
                ans.push_back(s[i]);
            }

        }
        if(ans.empty()) cout<<" "<<'\n';
        else{
            reverse(ans.begin(),ans.end());
            cout<<ans<<'\n';
        }

    }


    return 0;
}