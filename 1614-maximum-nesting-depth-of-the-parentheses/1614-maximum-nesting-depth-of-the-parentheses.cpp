class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int depth=0;
        
        for(char c:s){
            if(c=='('){
                st.push('(');
                int size=st.size();
                depth=max(depth,size);
            }
            else if(c==')')
                st.pop();
        }
        return depth;
    }
};