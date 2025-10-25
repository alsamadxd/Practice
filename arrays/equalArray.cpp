// Check if two arrays are equal: same size and identical elements in the same order

#include <iostream>
using namespace std;

int main() {
   int arr[] = {1, 2, 3, 4, 5};
   int arr2[] = {1, 2, 3,4, 5};
   int len1=sizeof(arr)/sizeof(arr[0]);
   int len2=sizeof(arr2)/sizeof(arr2[0]);

   if(len1!=len2){
    cout<<" Not equal ";
    return 0;
   }
   else{
    while (len1>0)
    {
        if(arr[len1-1]!=arr2[len1-1]){
            cout<<" Not Equal ";
            return 0;
        }
        len1--;
    }
    cout<<"THe arrays are Equal";
    
   }
   return 0;
}