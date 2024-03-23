//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    vector<long long> ans;
    queue<long long> q;
    
    for(long long int index=0;index<K-1;index++){
        if(A[index]<0)
            q.push(index);
    }
    
    for(long long int index=K-1;index<N;index++){
        if(A[index]<0)
            q.push(index);
            
        if(q.empty()){
            ans.push_back(0);
        }
        else{
            if(q.front()<=index-K)
                q.pop();
            
            if(q.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back(A[q.front()]);
            }
        }
    }
    
    return ans;
                                                 
                                                 
 }