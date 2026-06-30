class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;

        }
        vector<vector<int>>a(n+1);
        for(auto it:m){
            a[it.second].push_back(it.first);
        }
        vector<int>ans;
        for(int i=n;i>=1;i--){
            if(ans.size()>=k){
                break;
            }
            for(auto it:a[i]){
                if(ans.size()<k){
                     ans.push_back(it);

                }
               

            }
        }
        return ans;
    
        
    }
};
