class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        
//         square the values in vector
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        
//         sort the vector which is sorted using two pointer approach
        int i=n-1;
        int left=0,right=n-1;
        
        while(left<=right){
            if(nums[left]<nums[right])
                ans[i--]=nums[right--];
            else
                ans[i--]=nums[left++];
        }
        
        return ans;
        
    }
};