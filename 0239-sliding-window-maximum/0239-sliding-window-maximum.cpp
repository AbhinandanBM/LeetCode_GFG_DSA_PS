class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> d;
        vector<int> ans;
        
//         store the first k-1 elements
        for(int i=0;i<k-1;i++){
            if(d.empty()){
                d.push_back(i);
            }
            else{
//                 the current element is greater than queue back then pop it
                while(!d.empty() && nums[i]>nums[d.back()])
                    d.pop_back();
                
                d.push_back(i);
            }
        }
        
//         store the next element of k window in queue
        for(int i=k-1;i<nums.size();i++){
//             the current element is greater than queue back then pop it
                while(!d.empty() && nums[i]>nums[d.back()])
            while(!d.empty() && nums[i]>nums[d.back()])
                d.pop_back();
            
            d.push_back(i);
            
//             check the front element is belong to the window or not
            if(d.front()<=i-k)
                d.pop_front();
            
            ans.push_back(nums[d.front()]);
        }
        
        return ans;
        
    }
};