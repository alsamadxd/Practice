#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number"<<endl;
    cin >> a;
    if (a > 1)
    {
        int i = 2;

        while (a > 0)
        {
            if (a % i == 0)
            {
                int j = 2;
                int c = 0;
                while (i > j)
                {
                    if (i % j == 0)
                    {
                        c++;
                    }
                    j++;
                }
                if (c == 0 )
                {
                    cout << i << endl;
                }
                a = a / i;
                if (a % i == 0 && a>0)
                {
                    cout << i << endl;
                }
            }
            i++;
        }
    }
    return 0;
}