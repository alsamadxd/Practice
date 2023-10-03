/*

Given an integer n check if n is prime or not.
A prime number is a number that is divisible by 1 and itself only.

Example 1:

Input:
n = 17
Output: 
True
Explanation:
17 is  divisible by  only 1 and 17.
So it's a prime number.



*/


#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}