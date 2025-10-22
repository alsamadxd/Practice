// Rotate the array right by k positions in-place (or specify direction).
// Input:
// arr = {1, 2, 3, 4, 5}, k = 2
// Output:
// Array after rotation: 4 5 1 2 3

#include <iostream>
using namespace std;

int main() {
   int arr[] = {1, 2, 3, 4, 5};
   int *arr1= new int[5];
   cout<<"Enter the value of k ";
   int k;
   cin>>k;

   if (k < 0 || k >= 5) {
        cout << "Invalid value of k";
        return 1;
    }

   int j=0;
   for(int i=5-k;i<5;i++){
    arr1[j++]=arr[i];
   }
   for(int i=0;i<5-k;i++){
    arr1[j++]=arr[i];
   }

   cout<<"Rotated Array "<<endl;
   for(int i=0;i<5;i++){
    cout<<arr1[i]<<" ";
   }
   delete[] arr1;
   return 0;
}