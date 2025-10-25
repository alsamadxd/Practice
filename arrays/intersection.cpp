// Return intersection of two arrays (unique common elements) — order not required

#include <iostream>
using namespace std;

int main() {
   int arr1[] = {1, 2, 3, 4};
   int arr2[] = { 3,3,5, 6};
   int common=INT8_MIN;
   for(int i=0;i<4;i++){
   for(int j=0;j<2;j++){
    if(arr1[i]==arr2[j]){
        if(common!=arr2[j]){
        common=arr2[j];
        cout<<common<<" ";
        }
    }
   }
   }
   if(common==INT8_MIN){
    cout<<"No common elements";
   }
   return 0;
}