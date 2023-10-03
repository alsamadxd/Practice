/*

Given an integer N. Write a program to print all the divisors of N.

Example 1:

Input:
N = 12
Output: 
1 2 3 4 6 12
Explanation:
12 is divisible by 1 2 3 4 6 12.

*/


#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
     for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
        
}