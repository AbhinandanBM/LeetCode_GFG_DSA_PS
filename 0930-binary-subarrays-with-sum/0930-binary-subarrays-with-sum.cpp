class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int result=0,prefSum=0;
        unordered_map<int,int> freq;
        freq[0]=1;
        
        for(auto el:nums){
            prefSum+=el;
            
            if(freq.find(prefSum-goal)!=freq.end())
                result+=freq[prefSum-goal];
            
            freq[prefSum]++;
        }
        return result;
    }
};