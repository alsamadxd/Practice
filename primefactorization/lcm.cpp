/*

Given two numbers a and b. The task is to find out their LCM.



Example 1:

Input:
a = 5, b = 10
Output:
10
Explanation:
LCM of 5 and 10 is 10


*/

#include <iostream>
using namespace std;

int lcm(int n, int m)
{

    int lcm = 1;
    for (int i = 2; i <= n; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            lcm = i;
            return lcm;
        }
    }
    return lcm;
}

int main()
{

    int n, m;
    int s;
    cout << "enter the numbers" << endl;
    cin >> n >> m;
    s = lcm(n, m);
    cout << "The LCM is = " << s;
}