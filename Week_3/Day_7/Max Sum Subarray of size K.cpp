//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int i=0,j=0;
        long long sum=0,ans=0;
        int n=arr.size();
        while(j<n){
            
            sum+=arr[j];
            if(j-i+1==k){
                ans=max(ans,sum);
                sum = sum - arr[i];
                i++;
                j++;
            }else{
                j++;
            }
            
        }
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        long long ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends