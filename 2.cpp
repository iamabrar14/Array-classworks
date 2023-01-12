#include <iostream>
using namespace std;
//only odd index
int main()
{
    int n,a[101];
    cout<<"Enter number elements : ";
    cin>>n;
    cout<<"Ente array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The elemetns are: ";
    for(int i=1;i<n;i+=2)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}