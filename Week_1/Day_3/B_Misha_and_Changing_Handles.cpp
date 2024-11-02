#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,string> res;
    map<string,string> temp;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        if(temp.find(a) != temp.end()){
            string s = temp[a];
            res[s] = b;
            temp.erase(a);
            temp[b] = s;
        }else{
            res[a] = b;
            temp[b] = a;
        }
    }
    cout<<res.size()<<'\n';
    for(auto [x,y] : res){
        cout<<x<<" "<<y<<" "<<'\n';
    }



    return 0;
}