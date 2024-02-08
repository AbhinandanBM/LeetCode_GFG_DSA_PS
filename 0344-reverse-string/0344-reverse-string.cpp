class Solution {
public:
    void reverseString(vector<char>& s) {
//         Using stack
        stack<char> st;
        
//         storing the char in stack
        for(int i=0;i<s.size();i++)
            st.push(s[i]);
        
//         Reversing the string through stack
        int i=0;
        while(!st.empty()){
            s[i]=st.top();
            i++;
            st.pop();
        }
        
    }
};