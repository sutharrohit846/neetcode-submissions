class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<string>st;
        for(auto it:tokens){
            if(it=="+"||it=="-"||it=="*"||it=="/"){
                int a=stoi(st.top());
                st.pop();
                int b=stoi(st.top());
                st.pop();
                if(it=="+"){
                    st.push(to_string(a+b));
                }else if(it=="*"){
                    st.push(to_string(b*a));
                }else if(it=="-"){
                    st.push(to_string(b-a));
                }else if(it=="/"){
                    st.push(to_string(b/a));
                }
            }else{
                st.push(it);
            }
        }

        int ans=stoi(st.top());
        return ans;
        
    }
};