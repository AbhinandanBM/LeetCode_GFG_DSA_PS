//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    void generate_binary(int N,string& temp,vector<string>& ans,int zero,int one){
        if(temp.size()==N){
            ans.push_back(temp);
            return;
        }
        
        temp.push_back('1');
        generate_binary(N,temp,ans,zero,one+1);
        temp.pop_back();
        
        if(zero<one){
            temp.push_back('0');
            generate_binary(N,temp,ans,zero+1,one);
            temp.pop_back();
        }
        
    }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    string temp;
	    vector<string> ans;
	    generate_binary(N,temp,ans,0,0);
	    
	    return ans;
	}
};


//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends