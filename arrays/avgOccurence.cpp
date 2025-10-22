// Find the average of array elements and occurence of the given element

#include <iostream>
using namespace std;

int main() {
   int arr[]={2,54,2,7,3,8,5,9,6,1,3};
   int sum=0;
   int count=0;
   int len=sizeof(arr)/sizeof(arr[0]);
   int element;

   cout<<"Give the element to count the occurence \n";
   cin>>element;

   for(int i=0;i<len;i++){
    sum+=arr[i];
    if(element==arr[i]){
        count++;
    }
   }
   cout<<"Average = "<<sum/len<<endl;
   cout<<"Occurence of element = "<<count;
   return 0;
}