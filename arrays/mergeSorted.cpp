// Merge two sorted arrays into one without using extra sorted array.

#include <iostream>
using namespace std;

int main() {
   int arr1[]={1,2,5,7,}; 
   int arr2[]={2,4,6,8,};
   int *arr3=new int[8];

   int k=0;
   for(int i=0;i<4;i++){
    if(arr1[i]<arr2[i]){
        arr3[i+k]=arr1[i];
        k++;
        arr3[i+k]=arr2[i];
    }
    else{
        arr3[i+k]=arr2[i];
        k++;
        arr3[i+k]=arr1[i];
    }
    
   }

   for(int i=0;i<8;i++){
    cout<<arr3[i]<<" ";
   }
   delete[] arr3;
   return 0;
}