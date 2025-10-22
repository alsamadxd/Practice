// Find the misssing number in the sorted array in ascending order

// Description: Given n distinct numbers from 1 to n+1, find the missing number. 
// Input:
// arr = {1, 2, 4, 5}
// Output:
// Missing Number: 3
#include <iostream>
using namespace std;

int main() {
   cout<<"Enter length of the array and it must be greater than 3";
   int len;
   cin>>len;
   int *arr=new int(len);
   cout<<"\n Enter the elements \n";
   for(int i=0;i<len;i++){
    cin>>arr[i];
   }
   int misNum;
   int mindiff=INT16_MAX;
//    int d1=arr[len-1]-arr[len-2];
//    int d2=arr[1]-arr[0];
//    int diff;
//    if(d1==d2)diff=d2;
//    else if(d1<d2)diff=d1;
//    else diff=d2;


    for(int i=0;i<len;i++){
        int diff=arr[i+1]-arr[i];
        if(mindiff>diff){
        mindiff=diff;
        }
    }
   for(int i=0;i<len-1;i++){
    if(!(arr[i+1]-arr[i]==mindiff)){

        for(int j=1;j<=arr[i+1]-arr[i]-mindiff;j++){
        misNum=arr[i]+(mindiff*j);
        cout<<"\nMissing number = "<<misNum;
        }
    }
   }
   return 0;
}