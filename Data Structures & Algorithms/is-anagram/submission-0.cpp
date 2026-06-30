class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>as(26,0);
        vector<int>at(26,0);
        for(auto it:s){
            as[it-'a']++;
        }
        for(auto it:t){
            at[it-'a']++;
        }
        for(int i=0;i<26;i++){
            if(as[i]!=at[i]){
                return false;
            }
        }
        return true;

    }
};
