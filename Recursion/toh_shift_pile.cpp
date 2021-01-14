// { Driver Code Starts
// Initial Template for C++

// N pile, nth move = ???

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    vector<int> shiftPile(int N, int n){
        // code here
        toh(N, 1, 2, 3, n);
        return v;
    }
    
private: 
    int count = 0;
    vector<int> v;
    void toh(int N, int from, int aux, int to, int n){
        // Base case
        if(N==0)
            return;
        toh(N-1, from, to, aux, n);
        if(++count==n){
            v.push_back(from);v.push_back(to);
        }
        toh(N-1, aux, from, to, n);
    }
};


// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends