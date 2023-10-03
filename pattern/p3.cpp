/*
Given an integer s. Write a program to print the Right angle triangle wall. The length of 
perpendicular and base is s. 

Example 1:

Input:
s = 4
Output:

*
* *
* * *
* * * *

Explanation:
Length of perpendicular and base of triangle is 4 .

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
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}