class Solution {
public:
    int lengthOfLastWord(string s) {
//         triming the last trailing spaces
        int index=s.find_last_not_of(' ')+1;
        s.erase(index);
        
//         finding the last space 
        int last_space_index=s.find_last_of(' ');
        
        return last_space_index==string::npos?s.length():s.length()-last_space_index-1;
        
    }
};