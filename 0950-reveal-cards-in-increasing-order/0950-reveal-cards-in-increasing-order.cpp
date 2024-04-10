class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        
        queue<int> q;
        vector<int> result(n);
        
        for(int i=0;i<n;i++){
            q.push(i);
        }
        
        sort(begin(deck),end(deck));
        
        for(int i=0;i<n;i++){
            
            int idx=q.front();
            result[idx]=deck[i];
            q.pop();
            
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        
        return result;
    }
};