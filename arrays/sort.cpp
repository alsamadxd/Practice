#include<iostream>
using namespace std;

int sort( int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

int main(){ 
    int n;
    cout << " Enter the length  of array ";
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++ ){
        cin>> arr[i];
    }
    sort(arr,n);
    for(int i=0;i<n;i++ ){
        cout<< arr[i]<< " ";
    }

}