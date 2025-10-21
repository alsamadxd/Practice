// Calculate the sum of the array and reverse that array

#include <iostream>
using namespace std;

int main() {
    int arr[]={2,54,2,7,3,8,5,9,6,1,3};
    int sum=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    int *arr2= new int(len);
    int k=len-1;

    cout<<"Old array\n";
    for(int i=0;i<len;i++){
        
        sum+=arr[i];
        arr2[k--]=arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<"\nThe sum = "<<sum<<endl;
    cout<<"Reversed Array\n";
    for(int i=0;i<len;i++){
        cout<<arr2[i]<<" ";
    }
   
   return 0;
}