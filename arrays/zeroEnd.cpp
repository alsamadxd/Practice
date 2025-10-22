// Move all the zero to the end of the array while preseving the order of non-zero elements.

#include <iostream>
using namespace std;

int main() {
   cout<<"Enter length of the array ";
   int len;
   cin>>len;
   int *arr=new int(len);
   cout<<"\n Enter the elements \n";
   for(int i=0;i<len;i++){
    cin>>arr[i];
   }

   int k=len;
   while(k>0){
   for(int i=0;i<len-1;i++){
    if(arr[i]==0){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
   }
   k--;
   }
    
   
   for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
   }

   return 0;
}