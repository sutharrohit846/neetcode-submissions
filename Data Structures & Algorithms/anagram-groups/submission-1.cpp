class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string ,vector<int>>m;
      int n=strs.size();
      for(int i=0;i<n;i++){
        vector<int>a(26,0);
        for(auto it:strs[i]){
            a[it-'a']++;    
        }
        string key = to_string(a[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(a[i]);
            }

        m[key].push_back(i);
      }
      vector<vector<string>>ans;
      for(auto it:m){
        vector<int>k=it.second;
        vector<string>h;
        for(auto f:k){
            h.push_back(strs[f]);
        }
        ans.push_back(h);
      }

      return ans;

        
    }
};
