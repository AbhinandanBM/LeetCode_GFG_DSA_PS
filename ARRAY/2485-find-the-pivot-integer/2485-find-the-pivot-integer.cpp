class Solution {
public:
    int pivotInteger(int n) {
        int start=1,end=n,mid;
        int fullsum=(n*(n+1))/2;
        
        while(start<=end){
            mid=start+(end-start)/2;
            int lsum=(mid*(mid+1))/2;
            int rsum=(fullsum-lsum)+mid;
            
            if(lsum==rsum)
                return mid;
            else if(lsum<rsum)
                start=mid+1;
            else 
                end=mid-1;
        }
        return -1;
        
    }
};