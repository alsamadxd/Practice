/*      FInd the first peak Element in an array

An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists). 
Given an array arr[] of size N, Return the index of any one of its peak elements. 
Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0. 
Also, arr[] will be in ascending order before the peak element, and in descending order after that.


Input:
N = 3
arr[] = {3,4,2}
Possible Answer: 1
Output: 1
Explanation: 4 (at index 1) is the 
peak element as it is greater than 
it's neighbor elements 3 and 2.
If 1 is returned then the generated output will be 1 else 0.

*/ 



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<" Enter the size of array\n";
    cin>>n;
    int arr[n];
    for( int i =0; i<n;i++){
        cin>>arr[i];
    }
    int i=0;
        while(i<n){
        if((i==0 && arr[i]>arr[i+1]) || (i==n-1 && arr[i]>arr[i-1]))
        {
            cout<<" The peak Element is = "<< arr[i];
            break;   
        }
        else if(arr[i]>arr[i+1]  &&  arr[i]>arr[i-1]){
            cout<<" The peak Element is = "<< arr[i];  
            break; 
        }
        i++;
    }

    return 0;
}