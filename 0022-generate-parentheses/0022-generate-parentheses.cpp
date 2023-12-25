class Solution {
public:
    void parenthesis(int n,int left,int right,string& temp,vector<string>& ans){
        if(left+right == 2*n){
            ans.push_back(temp);
            return;
        }
        
//         left side
        if(left < n){
            temp.push_back('(');
            parenthesis(n,left+1,right,temp,ans);
            temp.pop_back();
        }
        
//         right side
        if(right < left){
            temp.push_back(')');
            parenthesis(n,left,right+1,temp,ans);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string temp;
        vector<string> ans;
        
        parenthesis(n,0,0,temp,ans);
        
        return ans;
    }
};