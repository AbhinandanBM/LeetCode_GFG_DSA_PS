class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        queue<int> q;
        int flip=0,n=nums.size();
        
        for(int i=0;i<n;i++){
            if(!q.empty() && q.front()<i)
                q.pop();

//             how many times flipped the bit
            if(q.size()%2==nums[i]){
//                 the element is within the array?
                if(i+k-1 >= n)
                    return -1;
                
                q.push(i+k-1);
                flip++;
            }
        }
        return flip;
        
    }
};