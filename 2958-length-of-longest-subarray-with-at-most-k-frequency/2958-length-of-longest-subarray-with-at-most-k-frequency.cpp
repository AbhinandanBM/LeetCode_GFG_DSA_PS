class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
//         using the sliding window approach
        int i=0,j=0,n=nums.size();
        int result_len=INT_MIN;
        unordered_map<int,int> freq;
        
        while(j<n){
            freq[nums[j]]++;
            while(i<j && freq[nums[j]]>k){
                freq[nums[i]]--;
                i++;
            }
            result_len=max(result_len,(j-i+1));
            j++;
        }
        
        return result_len;
    }
};