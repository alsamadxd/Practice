// Find the largest and the samllest element in the array

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,54,2,7,3,8,5,9,6,1,3};
    
    int sm=arr[0];
    int lg=arr[0];
    for(int i=1;i<sizeof(arr)/sizeof(arr[i]);i++){
        if(sm>arr[i]){
            sm=arr[i];
        }
        else if(lg<arr[i]){
            lg=arr[i];
        }
    }
    cout<<"The largest number = "<<lg<<" and the smallest number is = "<<sm;
}       