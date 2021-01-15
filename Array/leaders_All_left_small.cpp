// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




vector<int> leaders(int arr[], int n){
    // code here
    vector<int> res;
    int tempArr[n];
    tempArr[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--) {
        if(arr[i]>tempArr[i+1]){
            tempArr[i]=arr[i];
        } else {
            tempArr[i] =tempArr[i+1];
        }
    }
    for(int i =0 ; i < n; i++){
        if(arr[i]==tempArr[i])
            res.push_back(arr[i]);
    }
    return res;
}

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        //calling leaders() function
        vector<int> v = leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends