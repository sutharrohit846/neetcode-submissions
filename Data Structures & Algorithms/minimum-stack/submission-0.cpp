class MinStack {
public:
unordered_map<int,int>m;
stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        m[val]++;

        
    }
    
    void pop() {
       int k= st.top();
       m[k]--;
       if(m[k]==0){
        m.erase(k);
       }
       st.pop();
        
    }
    
    int top() {
       return  st.top();
        
    }
    
    int getMin() {
        int mini=INT_MAX;
        for(auto it:m){
            mini=min(it.first,mini);
            
        }
        return mini;
        
    }
};
