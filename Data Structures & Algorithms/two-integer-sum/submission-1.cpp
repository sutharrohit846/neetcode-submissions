class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>m;
      int n=nums.size();
      vector<int>ans;
      for(int i=0;i<n;i++){
        int difference=target-nums[i];
        if(m.find(difference)!=m.end()){
            ans={i,m[difference]};

        }else{
            m[nums[i]]=i;
        }
      }
      sort(ans.begin(),ans.end());
      return ans;
        
    }
};
