class Solution {
public:
    int minAddToMakeValid(string s) {
        int Ocount=0,Ccount=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                Ocount++;
            else if(s[i]==')'){
                if(!Ocount)
                    Ccount++;
                else
                    Ocount--;
            }
                
        }
        return Ocount+Ccount;
        
    }
};