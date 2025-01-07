class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        vector<int>v;
        queue<int>q;
        int n = arr.size();
        int l=0,r=0;
        while(r<n){
            if(arr[r]<0){
                q.push(arr[r]);
            }
            if(r-l+1==k){
                if(q.empty()){
                    v.push_back(0);
                }else{
                    v.push_back(q.front());
                }
                if(arr[l]<0){
                    q.pop();
                }
                l++;
            }
            r++;
        }
        return v;
    }
};