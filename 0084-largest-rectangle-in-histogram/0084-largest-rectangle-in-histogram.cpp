class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
//         Optimized Approach
        int ans=0,n=heights.size();
        stack<int> st;
        
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
//                 Next smallest Right
                int index=st.top();
                st.pop();
                
//                 Next smallest left will be top of the stack
                if(!st.empty()){
                    ans=max(ans,heights[index]*(i-st.top()-1));
                }
//                 top of the stack not exists
                else
                {
                    ans=max(ans,heights[index]*i);
                }
                
            }
            st.push(i);
        }
        
//         Still stack exists not able to get the next smallest right then will be size of height
        while(!st.empty()){
            int index=st.top();
            st.pop();
            
            if(!st.empty()){
                    ans=max(ans,heights[index]*(n-st.top()-1));
                }
                else
                {
                    ans=max(ans,heights[index]*n);
                }
            
        }
        return ans;
        
    }
};