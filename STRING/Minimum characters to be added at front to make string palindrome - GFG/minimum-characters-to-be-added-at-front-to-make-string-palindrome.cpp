//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int minChar(string str){
        //Write your code here
        
        //reversed string
        string rev = str;
        reverse(rev.begin(),rev.end());
        //original string size
        int size = str.size();
        str+='$';
        str+=rev;
        
        //finding lps of string
        int pre = 0,suf =1;
        //after adding reverse string the whole string size
        int n = str.size();
        vector<int> lps(str.size(),0);
        while(suf < str.size()){
            //Matched
            if(str[pre] == str[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            //Not Matched
            else{
                if(pre == 0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
        return size-lps[n-1];
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends