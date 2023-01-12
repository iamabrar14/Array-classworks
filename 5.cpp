#include<iostream>
using namespace std;

int main()
{
    int a[101],n,t;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    t=a[0];
    for(int i=1;i<=n-1;i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=t;
    cout<<"So after shifting left : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}