class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        
        while(left < right){
            int mid=left+(right-left)/2;
            int count=0;
            
//             count the number less than mid
            for(int num:nums){
                if(num<=mid)
                    count++;
            }
            
//          count is greater than mid duplicate lies in left part
            if(count>mid)
                right=mid;
//             otherwise in right part
            else
                left=mid+1;
        }
        
        return left;
    }
};