#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // Kadane's Algorithm to find maximum subarray sum
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i=0; i<n; i++){
        currentSum += arr[i];
        if(currentSum > maxSum){
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl;
    return 0;
}
