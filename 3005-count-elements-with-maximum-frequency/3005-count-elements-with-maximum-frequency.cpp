class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101,0);
        int maxfreq=0,count=0;
        
        for(int num:nums){
            freq[num]++;
            maxfreq=max(maxfreq,freq[num]);
        }
        
        for(int i=0;i<101;i++){
            if(freq[i]==maxfreq)
                count++;
        }
        
        return maxfreq*count;
        
    }
};