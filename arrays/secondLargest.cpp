// Find the second largest element in an array

#include <iostream>
using namespace std;

int main() {
   int arr[]={2,54,2,7,3,8,5,9,6,1,3};
   int max=INT64_MIN;
   int max2=INT64_MIN;
   int len=sizeof(arr)/sizeof(arr[0]);

   for(int i=0;i<len;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    else if(arr[i]>max2 && arr[i]<max){
        max2=arr[i];
    }
   }
   cout<<max2;
   return 0;
}