#include <iostream>

using namespace std;

int main()
{
    int i, j, n, a[100], e, c = 0;
    cout << "Enter number of elements ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the element to be searched: ";
    cin >> e;
    for (i = 0; i < n; i++)
    {
        if (a[i] == e)
        {
            c = 1;
            break;
        }
    }
    if (c == 1)
    {
        cout << "Element found at :" << i + 1 << endl;
    }
    else
    {
        cout << "Element not found" << endl;
        
    }
    return 0;
}