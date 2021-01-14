#include<bits/stdc++.h>
using namespace std;

int countSubsetSum(int *arr, int n, int sum) {
    if(n == 0){
        return sum == 0 ? 1 : 0;
    }
    int count = 0;
    count += countSubsetSum(arr, n-1, sum); 
    count += countSubsetSum(arr, n-1, sum-arr[n-1]);
    return count;
}


int main() {
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;cin>>a[i++]){}
    int sum;
    cin>>sum;
    cout<<countSubsetSum(a,size,sum);
    return 0;
}