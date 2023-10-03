/*
Given an integer S. Write a program to print the Inverted "Right angle triangle" wall. 
The length of the perpendicular and base is S.  Use nested loop.

Example 1:

Input:
S = 4
Output:

* * * *
* * *
* *
*



*/

#include <iostream>
using namespace std;

int main()
{
    int s;
    cout << "Enter the number" << endl;
    cin >> s;
    for(int i=s;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }




}