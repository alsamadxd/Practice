/*



Given an array arr[] of size N of positive integers which may have duplicates. 
The task is to find the maximum and second maximum from the array, and both 
of them should be different from each other, so If no second max exists, then 
the second max will be -1.

Example 1:

Input:
N = 3
arr[] = {2,1,2}
Output: 2 1
Explanation: From the given array 
elements, 2 is the largest and 1 
is the second largest.

*/




#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of Array " << endl;
    cin >> n;
    int arr[n];

    int max = INT_MIN;
    int max2=INT_MIN;

    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

    int index, element;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>max2){
            max2=arr[i];
        }
    }
    

    cout<<"   "<< max<< "   "<< max2;

    return 0;
}