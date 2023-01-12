#include<iostream>
using namespace std;

int main()
{
    int a[101],n,t;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    t=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=t;
    cout<<"New array :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}