#include <iostream>
using namespace std;

int main()
{

    int n;
    int factorial = 1;
    cout << "Enter the number " << endl;
    cin >> n;
    while (n)
    {
        factorial *= n;
        n -= 1;
    }
    cout << " The factorial = " << factorial;
    return 0;
}