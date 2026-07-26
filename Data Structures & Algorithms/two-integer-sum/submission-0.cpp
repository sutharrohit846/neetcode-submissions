class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>a;
        int n=nums.size();
        for(int i=0;i<n;i++){
            a.push_back({nums[i],i});
        }
        sort(a.begin(),a.end());
        int i=0;
        int j=n-1;
        vector<int>ans;
        while(i<=j){
            long long sum=(long long)(a[i].first+a[j].first);
            if(sum==(long long)target){
                ans={a[i].second,a[j].second};
                break;
            }else if(sum>(long long)target){
                j--;
            }else{
                i++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
