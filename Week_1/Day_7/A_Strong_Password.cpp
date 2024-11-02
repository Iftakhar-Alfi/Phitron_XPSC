#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        bool flag=false;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                flag = true;
                char c;
                if(s[i]=='z'){
                    c = 'y';
                }else{
                    c=s[i]+1;
                }
                s=s.substr(0,i+1)+c+s.substr(i+1);
                break;
            }
                  
        }
        if(flag==false){
            char c;
            if(s[s.size()-1]=='z'){
                s.push_back('y');
            }else{
                c=s[s.size()-1]+1;
                s.push_back(c);
            }
            
        }  
        cout<<s<<'\n';
    }
    


    return 0;
}