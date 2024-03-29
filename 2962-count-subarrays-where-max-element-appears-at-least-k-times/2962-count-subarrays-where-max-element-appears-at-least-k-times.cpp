class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long result=0;
        int maxEle=0,maxCount=0;
        
        for(int i=0;i<nums.size();i++){
            maxEle=max(maxEle,nums[i]);
        }
        
        int i=0,j=0,n=nums.size();
        while(j<n){
            if(nums[j]==maxEle){
                maxCount++;
            }
            
            while(maxCount>=k){
                result+=n-j;
                
                if(nums[i]==maxEle){
                    maxCount--;
                }
                i++;
            }
            j++;
        }
        return result;
    }
};