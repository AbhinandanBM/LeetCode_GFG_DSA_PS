class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> result;
        int n=num.length();
        
        for(int i=0;i<n;i++){
            
            while(result.size()>0 && result.top()>num[i] && k>0){
                result.pop();
                k--;
            }
            
            if(result.size()>0 || num[i]!='0'){
                result.push(num[i]);
            }
        }
        
        while(result.size()>0 && k>0){
            result.pop();
            k--;
        }
        
        if(result.empty())
            return "0";
        
        string s="";
        while(!result.empty()){
            s.push_back(result.top());
            result.pop();
        }
        
        reverse(s.begin(),s.end());
        return s;
    }
};