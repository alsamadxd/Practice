// Find the common elements in two arrys i.e intersection

#include <iostream>
using namespace std;

int main() {
   int arr1[] = {1, 2, 3, 4};
   int arr2[] = {3, 4, 5, 6};

   cout<<"Common Elements = ";
   for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
        }
    }
   }
   return 0;
}