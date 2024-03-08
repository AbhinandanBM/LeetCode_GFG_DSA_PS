class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101,0);
        int maxfreq=0;
        
        for(int num:nums){
            freq[num]++;
            maxfreq=max(maxfreq,freq[num]);
        }
        
        
        
        return count(begin(freq),end(freq),maxfreq)*maxfreq;
        
    }
};