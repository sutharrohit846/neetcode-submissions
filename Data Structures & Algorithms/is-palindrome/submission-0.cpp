class Solution {
public:
    bool isPalindrome(string s) {
        string k;
        for(auto it:s){
            char h=tolower(it);
            if(h>='a'&&h<='z'||h>='0'&&h<='9'){
                k.push_back(h);
            }
        }
        string c=k;
        cout<<c;
        cout<<endl;
        reverse(k.begin(),k.end());
        cout<<k<<endl;
        if(c!=k){
            return false;
        }
        return true;
        
    }
};
