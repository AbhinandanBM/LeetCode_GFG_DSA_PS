class Solution {
public:
//     get the count of number of subarray with <=k different integers
    int slidingWindow(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int count=0,i=0,j=0,n=nums.size();
        
        while(j<n){
            mp[nums[j]]++;
            
            while(mp.size()>k){
//                 shrink the window
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            count+=(j-i+1);
            j++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return slidingWindow(nums,k)-slidingWindow(nums,k-1);
    }
};