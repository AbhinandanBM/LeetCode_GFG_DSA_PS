class Solution {
public:
    string removeKdigits(string num, int k) {
        string result="";
        
        for(int i=0;i<num.length();i++){
            while(result.length()>0 && result.back()>num[i] && k>0){
                result.pop_back();
                k--;
            }
            
            if(result.length()>0 || num[i]!='0'){
                result.push_back(num[i]);//for avoiding the pre zeros
            }
        }
        
        // all in increasing order only
        while(result.length() && k>0){
            result.pop_back();
            k--;
        }
        
        //all are deleted
        if(result=="")
            return "0";
        
        return result;
    }
};