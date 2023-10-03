/*
Given an integer S. Write a program to print the Right angle triangle. The length of the perpendicular 
and base is S.  
Note: Print exactly two blank spaces after *. Also print a new line after printing the Triangle.

Example 1:

Input:
S = 9
Expected Output: 

*
*  *
*    *
*      *
*        *
*          *
*            *
*              *
* * * * * * * * *

Explanation:
Length of perpendicular and base of triangle is 9 .

*/


#include <iostream>
using namespace std;

int main()
{
    int s;
    cout << "Enter the number" << endl;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        
        cout<<"* ";
        for (int j = 1; j <= i; j++)
        {
            if(i==(s-1)){
                cout<<"* ";
            }
            else if(i==0){
                cout<<"*";
            }
            else if(i==j){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout << endl;
    }
    return 0;
}