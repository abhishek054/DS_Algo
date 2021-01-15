// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int maxSubarraySum(int *A, int n){ // Kaedens Algo
    int res=A[0];
    int temp=A[0];
    for(int i=1;i<n;i++){
        temp=max(A[i], A[i]+temp);
        res=max(res, temp);
    }
    return res;
}

int maxValue(int *v, int n){
    int m = INT_MIN;
    for(int i=0;i<n; i++){
        m = max(m, v[i]);
    }
    return m;
}
    
// Function to find circular subarray with maximum sum
// arr: input array
// num: size of array
int circularSubarraySum(int A[], int num){
    
    // your code here
    int m = maxSubarraySum(A, num);
    if(m < 0) {        
        // If empty subarray allowed, return 0;    
        return maxValue(A, num);
    }
    int sum =0;
    for(int i=0;i<num;i++){
        sum+=A[i];
        A[i] *= -1;
    }
    int val = maxSubarraySum(A, num);
    int max_Circular = sum+val;
    return max(m, max_Circular);
}

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	    
	    //calling function
	    cout << circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends