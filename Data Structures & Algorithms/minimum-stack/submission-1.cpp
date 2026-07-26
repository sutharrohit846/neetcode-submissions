class MinStack {
public:
stack<int>minstack;
stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        val=min(val,minstack.empty()?val:minstack.top());
        minstack.push(val);

        
    }
    
    void pop() {
      st.pop();
      minstack.pop();
        
    }
    
    int top() {
       return  st.top();
        
    }
    
    int getMin() {
     return minstack.top();
        
    }
};
