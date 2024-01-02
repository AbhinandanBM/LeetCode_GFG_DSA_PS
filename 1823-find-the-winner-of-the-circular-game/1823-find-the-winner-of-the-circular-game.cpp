class Solution {
public:
    int winner(vector<bool>& person,int n,int person_left,int index,int k){
        if(person_left == 1){
            for(int i=0;i<person.size();i++){
                if(person[i]==0)
                    return i+1;
            }
        }
        
        int kill = (k-1)%person_left;
        while(kill--){
            index=(index+1)%n;
            while(person[index]==1){
                index=(index+1)%n;
            }
        }
        person[index]=1;
        while(person[index]==1){
            index=(index+1)%n;
        }
        return winner(person,n,person_left-1,index,k);
        
    }
    int findTheWinner(int n, int k) {
        vector<bool> person(n,0);
        int person_left = n;
        
        return winner(person,n,person_left,0,k);
        
    }
};