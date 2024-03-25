class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> result;
        
        for(int i=0;i<nums.size();i++){
            int num=abs(nums[i]);
            int index=num-1;
            
            if(nums[index]<0)
                result.push_back(num);
            else
                nums[index]=-1*nums[index];
        }
        
        return result;
        
    }
};