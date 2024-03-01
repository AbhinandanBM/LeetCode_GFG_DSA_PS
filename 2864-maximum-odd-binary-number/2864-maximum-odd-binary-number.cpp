class Solution {
public:
    string maximumOddBinaryNumber(string s) {
//         using coutn sort approach
        int cnt1=0,n=s.size();
        
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                cnt1++;
        }
        
        string ans=string(cnt1-1,'1')+string(n-cnt1,'0')+'1';
        return ans;
        
    }
};