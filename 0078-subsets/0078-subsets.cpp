class Solution {
public:
    void subsequence(vector<int>& nums,int index,int n,vector<int>& temp,vector<vector<int>>& ans){
        if(index == n){
            ans.push_back(temp);
            return;
        }
        
//         Exclude
        subsequence(nums,index+1,n,temp,ans);
        
//         Include
        temp.push_back(nums[index]);
        subsequence(nums,index+1,n,temp,ans);
        temp.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        subsequence(nums,0,nums.size(),temp,ans);
        
        return ans;
    }
};