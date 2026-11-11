class Solution {
  public:
    void reverseStack(stack<int> &st) {
        if(st.empty()) return;
        int stack_top_element = st.top();
        st.pop();
        reverseStack(st);
        insert_at_bottom(st, stack_top_element);
    }
    
    public: 
    void insert_at_bottom(stack<int> &st, int val){
        if(st.empty()){
            st.push(val);
            return;
        }
        int stack_top_element = st.top();
        st.pop();
        insert_at_bottom(st, val);
        st.push(stack_top_element);
    }
};