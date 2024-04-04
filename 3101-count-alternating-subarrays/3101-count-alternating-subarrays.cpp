class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long ans=0,latestOccur=-1;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                latestOccur=i-1;
            }
            
            ans+=i-latestOccur;
        }
        
        return ans;
    }
};