class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         using Hare - Tortoise Algo Method
        int slow=nums[0],fast=nums[0];
        
        slow=nums[slow];
        fast=nums[nums[fast]];
        
//         detect cycle
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        
//         if cycle present
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        
//         duplicate value
        return slow;
        
    }
};