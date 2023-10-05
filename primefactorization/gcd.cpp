/*

Given two numbers A and B. The task is to find the GCD of  A and B.
The GCD of two numbers is the largest number that can divide both A and B perfectly.

Example 1:

Input:
A = 6
B = 9
Output:
3
Explanation:
After 3 there is no number that can
divide both 6 and 9 perfectly.


*/

#include <iostream>
using namespace std;

int gcd(int n, int m)
{

    int gcd = 0;
    for (int i = 1; i <= n; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int main()
{

    int n, m;
    cout << "enter the numbers" << endl;
    cin >> n >> m;
    int s;
    s = gcd(n, m);
    cout << "The GCD is = " << s;
}