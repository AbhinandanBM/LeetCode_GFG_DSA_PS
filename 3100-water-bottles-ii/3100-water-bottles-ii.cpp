class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;
        int emptyBottles=numBottles;
        
//         every iteration numexchange will be increased
        while(emptyBottles >= numExchange){
            ans+=1;
            emptyBottles-=numExchange;
            emptyBottles++;
            numExchange++;
        }
        
        return ans;
    }
};