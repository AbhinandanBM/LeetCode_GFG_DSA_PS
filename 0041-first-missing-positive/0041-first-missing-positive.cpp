class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        
        bool contains1=false;
//         check for minimum positive number 1 present or not and then any number greater than n and less than 0 mark it 1
        for(int i=0;i<n;i++){
            if(nums[i]==1)
                contains1=true;
            
            if(nums[i]<=0 || nums[i]>n)
                nums[i]=1;
        }
        
//         if it is not return minimum positive number
        if(contains1==false)
            return 1;
        
//         check and mark for every value
        for(int i=0;i<n;i++){
            int num=abs(nums[i]);
            int index=num-1;
            
            if(nums[index]<0)
                continue;
            
            nums[index]*=-1;
        }
        
//         not marked as negative that is not present in the array
        for(int i=0;i<n;i++){
            if(nums[i]>0)
                return i+1;
        }
        //     all are present then return maximum positive number
    return n+1;
    }
    

};