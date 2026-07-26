class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        unordered_map<char,int>m;
        int n=s.size();
        int maxi=0;
        int ans=0;
        while(r<n){
            m[s[r]]++;
            maxi=max(maxi,m[s[r]]);
            if((r-l+1)-maxi<=k){
                ans=max(ans,r-l+1);
            }else{
                m[s[l]]--;
                l++;
            }
            r++;


        }
        return ans;
        
    }
};
