class Solution {
public:
    void lps_find(vector<int> &lps,string s) {
	    int pre = 0,suf = 1;
	    
	    while(suf < s.size()){
            //Matched
	        if(s[pre] == s[suf]){
	            lps[suf] = pre + 1;
	            pre++;
	            suf++;
	        }
            //Not Matched
	        else{
	            if(pre == 0){
	                lps[suf] = 0;
	                suf++;
	            }
	            else{
	                pre = lps[pre-1];
	            }
	        }
	    }
	}
    
    int KMP_Match(string haystack, string needle) {
        vector<int> lps(needle.size(),0);
        lps_find(lps,needle);
        int first = 0,second = 0;
        
        while(second < needle.size() && first < haystack.size()){
            if(haystack[first] == needle[second]){
                first++;
                second++;
            }
            else{
                if(second == 0){
                    first++;
                }
                else{
                    second = lps[second - 1];
                }
            }
            
        }
        
        if(second == needle.size())
            return 1;
        else
            return 0;
        
    }
    
    int repeatedStringMatch(string a, string b) {
        if(a == b)
            return 1;
        
        int repeat = 1;
        string temp = a;
        
        while(temp.size() < b.size()){
            temp+=a;
            repeat++;
        }
        
        //apply KMP Pattern Search
        if(KMP_Match(temp,b) == 1)
            return repeat;
        
        //temp+a , KMP Search
        if(KMP_Match(temp+a,b) == 1)
            return repeat + 1;
        
        return -1;
        
    }
};