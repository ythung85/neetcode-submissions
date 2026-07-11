class MinStack {

private:
    stack<int> min_st;
    stack<int> st;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        
        int minv;
        if(min_st.empty()){
            minv = val;
        } else{
            minv = min_st.top();
        }
        val = min(val, minv);
        min_st.push(val);
    }
    
    void pop() {
        st.pop();
        min_st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
        
    }
};
