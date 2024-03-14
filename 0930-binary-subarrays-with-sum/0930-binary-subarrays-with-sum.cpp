class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i=0,j=0,n=nums.size();
        int ans=0,prefSum=0;
        int count_zero=0;
        
        while(j<n){
            prefSum+=nums[j];
            
            while(i<j && (nums[i]==0 || prefSum > goal)){
                if(nums[i]==0)
                    count_zero++;
                else
                    count_zero=0;
                
                prefSum-=nums[i];
                i++;
            }
            
            if(prefSum==goal){
                ans+=1+count_zero;
            }
            j++;
        }
        return ans;
        
    }
};