class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int emptyBottles=numBottles;
        
        while(emptyBottles>=numExchange){
            ans+=1;
            emptyBottles-=numExchange;
            emptyBottles++;
        }
        
        return ans;
    }
};