class Solution {
public:
    void merge(vector<int>& nums,int start,int mid,int end){
        vector<int> temp(end-start+1);
        int left=start,right=mid+1,index=0;
        while(left<=mid && right<=end){
            if(nums[left]<=nums[right]){
                temp[index]=nums[left];
                left++,index++;
            }
            else{
                temp[index]=nums[right];
                right++,index++;
            }
        }
        
        while(left<=mid){
            temp[index]=nums[left];
            index++,left++;
        }
        
        while(right<=end){
            temp[index]=nums[right];
            index++,right++;
        }
        
//         copy to original
        index=0;
        while(start<=end){
            nums[start]=temp[index];
            index++,start++;
        }
    }
    
    void mergeSort(vector<int>& nums,int start,int end){
        if(start==end)
            return;
        
        int mid = start+(end-start)/2;
        mergeSort(nums,start,mid);
        mergeSort(nums,mid+1,end);
        merge(nums,start,mid,end);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        
        return nums;
    }
};