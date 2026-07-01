class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto it:nums){
            m[it]++;
        }
        int ans=0;

        
        for(auto it:nums){ 
            int ct=1;
            int x=it+1;
            while(m.find(x)!=m.end()){
                ct++;
                x++;
            }
            ans=max(ans,ct);

          
        }
        return ans;
        
        
    }
};
