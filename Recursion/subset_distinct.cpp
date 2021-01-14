// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


vector<vector<int>> combineVector(vector<vector<int>> A, vector<vector<int>> B) {
    for(auto x=B.begin();x!=B.end();x++){
        A.push_back(*x);
    }
    return A;
}

vector<vector<int>> Subset(vector<int> A, int n, vector<int> temp) {
    vector<vector<int>> v = {temp};
    if(n==0){
        return v;
    }
    v = combineVector(v, Subset(A, n-1, temp));
    temp.push_back(A[n]);
    v = combineVector(v, Subset(A, n-1, temp));
    return v;
}

vector<vector<int>> AllSubsets(vector<int> A, int n)
{
    // code here 
    vector<vector<int>> VOut;
    vector<int> VIn;
    VOut = Subset(A, n, VIn);
    unique(VOut.begin(), VOut.end());
    return VOut;
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        
        vector<vector<int> > result = AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends