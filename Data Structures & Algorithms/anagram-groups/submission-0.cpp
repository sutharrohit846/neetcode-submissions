class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>s;
        for(auto it:strs){
            string  &a=it;
            sort(a.begin(),a.end());
            s.push_back(a);
        }
        unordered_map<string,vector<int>>m;
        int n=strs.size();
        for(int i=0;i<n;i++){
            m[s[i]].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto it:m){
            vector<int>&k=it.second;
            vector<string>f;
            for(auto h:k){
                f.push_back(strs[h]);
            }
            ans.push_back(f);
           
        }
        return ans;

        
    }
};
