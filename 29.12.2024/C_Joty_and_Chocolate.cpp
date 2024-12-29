#include<bits/stdc++.h>
using namespace std;
unsigned long long LCM(unsigned long long a,unsigned long long b){
    return ((a/ __gcd(a,b))*b);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long  long n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    unsigned long long count_p=n/a;
    
    unsigned long long count_q=n/b;

    unsigned long long lcm = LCM(a,b);
    unsigned long long count_lcm = n/lcm;
    count_p -= count_lcm;
    count_q -= count_lcm;
    unsigned long long ans = (p*count_p)+(q*count_q);
    if(p>q){
        ans+=p*count_lcm;
    }else{
        ans+=q*count_lcm;
    }
    cout<<ans<<'\n';


    return 0;
}