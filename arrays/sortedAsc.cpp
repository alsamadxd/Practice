// Check if the array is sorted in the ascending order or not

#include <iostream>
using namespace std;

int main() {
    int len;
   cout<<"Enter the length of the array \n";
   cin>>len;
   int *arr=new int(len);
   for(int i=0;i<len;i++){
    cout<<"Enter an element";
    cin>>arr[i];
   }
   for(int i=0;i<len-1;i++){
    if(arr[i]>arr[i+1]){
        cout<<"No";
        return 0;
    }
   }
   cout<<"Yes";
   return 0;
}