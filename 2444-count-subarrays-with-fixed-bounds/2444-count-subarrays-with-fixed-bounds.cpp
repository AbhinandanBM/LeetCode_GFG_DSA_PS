class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        
        int minIndex=-1,maxIndex=-1,culIdx=-1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK)
                culIdx=i;
            
            if(nums[i]==minK)
                minIndex=i;
            
            if(nums[i]==maxK)
                maxIndex=i;
            
            long long small=min(minIndex,maxIndex);
            long long temp=small-culIdx;
            
            ans+=(temp<=0)?0:temp;
        }
        
        return ans;
    }
};