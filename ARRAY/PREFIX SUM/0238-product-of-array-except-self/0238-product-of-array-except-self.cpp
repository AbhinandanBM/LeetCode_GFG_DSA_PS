class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//         two pass Approach
        int pref=1,suff=1;
        int n=nums.size();
        vector<int> prod(n);
        
        for(int i=0;i<n;i++){
            prod[i]=pref;
            pref*=nums[i];
        }
        
        for(int i=n-1;i>=0;i--){
            prod[i]*=suff;
            suff*=nums[i];
        }
        
        return prod;
        
    }
};