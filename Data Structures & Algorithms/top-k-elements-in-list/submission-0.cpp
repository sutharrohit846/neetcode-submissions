class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;

        }
        vector<pair<int,int>>a;
        for(auto it:m){
            a.push_back({it.second,it.first});
        }
        sort(a.begin(),a.end());
        vector<int>ans;
        int h=a.size();
        for(int i=h-1;i>=(h-k);i--){
            ans.push_back(a[i].second);

        }
        return ans;
        
    }
};
