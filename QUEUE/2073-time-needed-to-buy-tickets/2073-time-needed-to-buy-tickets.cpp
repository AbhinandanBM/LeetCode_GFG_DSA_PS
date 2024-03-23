class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        //store the all indexes which require tickets
        for(int i=0;i<tickets.size();i++)
            q.push(i);
        
        int time=0;
        //loop until the particular one gets all tickets required
        while(tickets[k]){
        //give the ticket to the person and reduce the ticket required count
            tickets[q.front()]--;
            //again required ticket move to the queue and get ticket
            if(tickets[q.front()])
                q.push(q.front());
            q.pop();
            time++;
        }
       return time; 
    }
};