//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int> S;
        
        for(int i=0;i<arr.size();i++){
            if(S.empty())
                S.push(arr[i]);
            else if(arr[i]>=0){
                if(S.top()>=0)
                    S.push(arr[i]);
                else
                    S.pop();
            }
            else{
                if(S.top()<0)
                    S.push(arr[i]);
                else
                    S.pop();
            }
        }
        
        vector<int> ans(S.size());
        int i=S.size()-1;
        while(!S.empty()){
            ans[i]=S.top();
            i--;
            S.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends