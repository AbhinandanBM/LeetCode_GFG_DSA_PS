class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
       for(int i=s.length()-1;i>=0;i--){
           if(s[i]!=' ')
               len++;
           else if(s[i]==' ' && len==0)
               continue;
           else
               break;
       } 
        
        return len;
    }
};