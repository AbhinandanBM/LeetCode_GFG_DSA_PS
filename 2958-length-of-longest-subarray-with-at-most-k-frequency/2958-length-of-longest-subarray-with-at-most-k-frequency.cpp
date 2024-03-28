class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
//         using the sliding window approach
        int i=0,j=0,n=nums.size();
        int result_len=INT_MIN;
        unordered_map<int,int> freq;
        
        int culprit=0;
        
        while(j<n){
            freq[nums[j]]++;
            if(freq[nums[j]]==k+1)
                culprit++;
            if(culprit>0){
                freq[nums[i]]--;
                if(freq[nums[i]]==k)
                    culprit--;
                i++;
            }
            
            if(culprit==0)
                result_len=max(result_len,(j-i+1));
            
            j++;
        }
        
        return result_len;
    }
};