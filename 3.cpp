#include<iostream>
using namespace std;
//only odd numbers
int main()
{
    int n,a[101];
    cout<<"Enter Number of elements : ";
    cin>>n;
    cout<<"Ente array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The elemetns are: ";
    for(int i=0;i<n;i++)
    {
        if(a[i]&1)
        {
            cout<<a[i]<<" ";
        }
    }
    
    return 0;
}