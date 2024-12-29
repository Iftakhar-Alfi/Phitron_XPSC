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
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long g1=0,g2=0;
        for(int i=0;i<n;i+=2){
            g1= __gcd(g1,v[i]);
        }

        for(int i=1;i<n;i+=2){
            g2= __gcd(g2,v[i]);
        }
        bool flag=true;
        for(int i=1;i<n;i+=2){
            if(v[i]%g1==0){
                flag=false;
            }
        }
        long long ans=0;
        if(flag){
            ans=g1;
        }else{
            bool flag=true;
            for(int i=0;i<n;i+=2){
                if(v[i]%g2==0){
                    flag=false;
                }
            } 
            if(flag){
                ans=g2;
            }
        }
        cout<<ans<<'\n';
    }


    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);

//    int t;
//    cin >> t;
//    while (t--) {
//       int n;
//       cin >> n;
//       vector<long long> a(n);
//       for (int i = 0;i < n;i++) {
//          cin >> a[i];
//       }
//       long long G1 = 0, G2 = 0;
//       for (int i = 0;i < n;i += 2) {
//          G1 = __gcd(G1, a[i]);
//       }
//       for (int i = 1;i < n;i += 2) {
//          G2 = __gcd(G2, a[i]);
//       }

//       long long ans = 0;
//       bool ok = true;
//       for (int i = 1;i < n;i += 2) {
//          if (a[i] % G1 == 0) {
//             ok = false;
//          }
//       }

//       if (ok) {
//          ans = G1;
//       }
//       else {
//          ok = true;
//          for (int i = 0;i < n;i += 2) {
//             if (a[i] % G2 == 0) {
//                ok = false;
//             }
//          }
//          if (ok) {
//             ans = G2;
//          }
//       }

//       cout << ans << '\n';
//    }

//    return 0;
// }