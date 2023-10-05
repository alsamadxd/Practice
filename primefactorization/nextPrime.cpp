/*

Given an integer n. Write a program to find the prime number next to n.

Example 1:

Input:
n = 15
Output:
17
Explanation:
17 is next prime number.

*/

#include <iostream>
using namespace std;

int nextPrime(int n)
{

    int c = 0;
    int a = n + 1;
    int flag = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return a;
    }
    else
    {
        nextPrime(a);
    }
}

int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int s;
    s = nextPrime(n);
    cout << "The next Prime number is = " << s;
}