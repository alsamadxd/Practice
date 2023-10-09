#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of Array " << endl;
    cin >> n;
    int arr[n];

    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int index, element;
    cout << "Enter the index and element";
    cin >> index >> element;

    for (index; index < n; index++)
    {
        int temp = 0;
        temp = arr[index];
        arr[index] = element;
        element = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}