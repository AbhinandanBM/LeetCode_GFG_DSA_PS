class Solution {
public:
    string customSortString(string order, string s) {
//         using custom comparator
        
        auto cmp=[&](char a,char b){
            return order.find(a)<order.find(b);
        };
        
        sort(s.begin(),s.end(),cmp);
        
        return s;
    }
};