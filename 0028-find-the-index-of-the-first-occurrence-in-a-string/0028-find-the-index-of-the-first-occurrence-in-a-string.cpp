class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size(),n = needle.size();
        
        for(int i = 0;i <= m-n;i++){
            int first = i,second = 0;
            
            while(second < n){
              if(haystack[first]!=needle[second]){
                break;
            }
            first++;
            second++;  
            }
            
            if(second == n)
                return i;
        }
        return -1; 
    }
};